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
int t,n,m,cnt1,cnt2;
ii b[M];
vector<int> a[N];
bool vst[N];

void dfs(int x,int u,int v){
    vst[x]=true;
    for(int y:a[x]){
        if ((x==u&&y==v)||(x==v&&y==u)) continue;
        if (!vst[y]) dfs(y,u,v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n) a[i].clear();
        foru(i,0,m-1){
            cin >> b[i].fi >> b[i].se;
            a[b[i].fi].push_back(b[i].se);
            a[b[i].se].push_back(b[i].fi);
        }
        sort(b,b+m);
        fill(vst,false);
        cnt1=0;
        foru(i,1,n)
            if (!vst[i]){
                cnt1++;
                dfs(i,-1,-1);
            }
        foru(i,0,m-1){
            fill(vst,false);
            cnt2=0;
            foru(j,1,n)
                if (!vst[j]){
                    cnt2++;
                    dfs(j,b[i].fi,b[i].se);
                }
            if (cnt2>cnt1) cout << b[i].fi << " " << b[i].se << " ";
        }
        cout << "\n";
    }
}