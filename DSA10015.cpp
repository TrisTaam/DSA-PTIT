#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct edge{
    int u,v,w;
};

const int N=105;
const int M=1e4+5;
int t,n,m,par[N],sz[N],ans;
edge a[M];
vector<edge> b;

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

bool cmp(edge a,edge b){
    return a.w<b.w;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,m-1) cin >> a[i].u >> a[i].v >> a[i].w;
        foru(i,1,n){
            par[i]=i;
            sz[i]=1;
        }
        ans=0;
        sort(a,a+m,cmp);
        b.clear();
        foru(i,0,m-1){
            if (b.size()==n-1) break;
            if (unionDsu(a[i].u,a[i].v)){
                b.push_back(a[i]);
                ans+=a[i].w;
            }
        }
        cout << ans << "\n";
    }
}