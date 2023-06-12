#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=2e5+5;
int n,x;
ll b[N],c[N];
vector<int> a[N];

void dfs(int x){
    for(int y:a[x]){
        dfs(y);
        c[x]+=(c[y]+1);
        b[x]+=b[y];
    }
    b[x]+=c[x];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,1,n){
        b[i]=1;
        c[i]=0;
    }
    foru(i,2,n){
        cin >> x;
        a[x].push_back(i);
    }
    dfs(1);
    foru(i,1,n) cout << b[i] << " ";
}