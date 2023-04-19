#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct node{
    int val;
    node* left;
    node* right;

    node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

int t,n,m,u,v;
char a;
node* root1;
node* root2;

void create(node* par,int u,int v,char a){
    if (a=='L') par->left=new node(v);
    else par->right=new node(v);
}

void insert(node* par,int u,int v,char a){
    if (par==NULL) return;
    if (par->val==u) create(par,u,v,a);
    else{
        insert(par->left,u,v,a);
        insert(par->right,u,v,a);
    }
}

bool dfs(node* root1,node* root2){
    stack<node*> s1;
    s1.push(root1);
    stack<node*> s2;
    s2.push(root2);
    node* x;
    node* y;
    while(!s1.empty()){
        x=s1.top();s1.pop();
        y=s2.top();s2.pop();
        if (x->val!=y->val) return false;
        if (x->left!=NULL) s1.push(x->left);
        if (x->right!=NULL) s1.push(x->right);
        if (y->left!=NULL) s2.push(y->left);
        if (y->right!=NULL) s2.push(y->right);
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        root1=NULL;
        foru(i,1,n){
            cin >> u >> v >> a;
            if (root1==NULL){
                root1=new node(u);
                create(root1,u,v,a);
            }
            else insert(root1,u,v,a);
        }
        cin >> m;
        root2=NULL;
        foru(i,1,n){
            cin >> u >> v >> a;
            if (root2==NULL){
                root2=new node(u);
                create(root2,u,v,a);
            }
            else insert(root2,u,v,a);
        }
        cout << (dfs(root1,root2)?1:0) << "\n";
    }
}