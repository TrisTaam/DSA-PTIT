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

int t,n,u,v,ans;
char a;
node* root;
map<int,node*> b;

void create(node* par,int u,int v,char a){
    if (a=='L') par->left=new node(v);
    else par->right=new node(v);
}

void insert(int u,int v,char a){
    if (a=='L'){
        b[u]->left=new node(v);
        b[v]=b[u]->left;
    }
    else{
        b[u]->right=new node(v);
        b[v]=b[u]->right;
    }
}

bool isLeaf(node* x){
    return x->left==NULL&&x->right==NULL;
}

bool full(node* x){
    return !(x->left==NULL^x->right==NULL);
}

bool res(node* root){
    queue<pair<node*,int>> q;
    q.push({root,0});
    pair<node*,int> x;
    set<int> a;
    while(!q.empty()){
        x=q.front();q.pop();
        if (isLeaf(x.fi)){
            a.insert(x.se);
            if (a.size()==2) return false;
        }
        else if (!full(x.fi)) return false;
        if (x.fi->left!=NULL) q.push({x.fi->left,x.se+1});
        if (x.fi->right!=NULL) q.push({x.fi->right,x.se+1});
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        root=NULL;
        b.clear();
        foru(i,1,n){
            cin >> u >> v >> a;
            if (root==NULL){
                root=new node(u);
                b[u]=root;
            }
            insert(u,v,a);
        }
        cout << (res(root)?"Yes":"No") << "\n";
    }
}