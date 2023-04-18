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

int t,n,u,v;
char a;
node* root;

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

void bfs(node* root){
    queue<node*> q;
    q.push(root);
    node* x;
    while(!q.empty()){
        x=q.front();q.pop();
        cout << x->val << " ";
        if (x->left!=NULL) q.push(x->left);
        if (x->right!=NULL) q.push(x->right);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        root=NULL;
        foru(i,1,n){
            cin >> u >> v >> a;
            if (root==NULL){
                root=new node(u);
                create(root,u,v,a);
            }
            else insert(root,u,v,a);
        }
        bfs(root);
        cout << "\n";
    }
}