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

void res(node* root){
    stack<node*> s1,s2;
    s1.push(root);
    node* x;
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            x=s1.top();s1.pop();
            cout << x->val << " ";
            if (x->right!=NULL) s2.push(x->right);
            if (x->left!=NULL) s2.push(x->left);
        }
        while(!s2.empty()){
            x=s2.top();s2.pop();
            cout << x->val << " ";
            if (x->left!=NULL) s1.push(x->left);
            if (x->right!=NULL) s1.push(x->right);
        }
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
        res(root);
        cout << "\n";
    }
}