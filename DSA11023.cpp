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

int t,n,a,ans;
node* root;

void build(node* &a,int b){
    if (a==NULL){
        a=new node(b);
        return;
    }
    if (a->val>b) build(a->left,b);
    else build(a->right,b);
}

void dfs(node* root,int a){
    if (root==NULL) return;
    ans=max(ans,a);
    dfs(root->left,a+1);
    dfs(root->right,a+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        root=NULL;
        foru(i,1,n){
            cin >> a;
            build(root,a);
        }
        ans=0;
        dfs(root,0);
        cout << ans << "\n";
    }
}