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

const int N=1005;
int t,n,a[N],ans;
node* root;

node* build(int l,int r){
    if (l>r) return NULL;
    int m=(l+r)/2;
    node* b=new node(a[m]);
    b->left=build(l,m-1);
    b->right=build(m+1,r);
    return b;
}

void dfs(node* root){
    if (root==NULL) return;
    if (root->left==NULL&&root->right==NULL) ans++;
    dfs(root->left);
    dfs(root->right);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        root=build(0,n-1);
        ans=0;
        dfs(root);
        cout << ans << "\n";
    }
}