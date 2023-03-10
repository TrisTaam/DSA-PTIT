#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
const int M=1e6+5;
int t,n,m,par[N],sz[N],ans;
ii a[M];

int findDsu(int a){
    if (a==par[a]) return a;
    return par[a]=findDsu(par[a]);
}

bool unionDsu(int a,int b){
    a=findDsu(a);
    b=findDsu(b);
    if (a==b) return false;
    if (sz[a]<sz[b]) swap(a,b);
    par[b]=a;
    sz[a]+=sz[b];
    return true;
}

bool res(){
    foru(i,0,m-1)
        if (!unionDsu(a[i].fi,a[i].se)) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,m-1) cin >> a[i].fi >> a[i].se;
        foru(i,1,n){
            par[i]=i;
            sz[i]=1;
        }
        cout << (res()?"YES":"NO") << "\n";
    }
}