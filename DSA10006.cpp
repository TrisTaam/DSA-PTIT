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
int t,n,m,u,x,y;
vector<int> a[N];
bool vst[N],kt;
vector<ii> b;

void dfs(int x){
    for(int y:a[x])
        if (!vst[y]){
            vst[y]=true;
            b.push_back({x,y});
            if (b.size()==n-1){
                kt=true;
                return;
            }
            if (kt) return;
            dfs(y);
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m >> u;
        foru(i,1,n) a[i].clear();
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        kt=false;
        b.clear();
        fill(vst,false);
        vst[u]=true;
        dfs(u);
        if (kt)
            for(ii x:b) cout << x.fi << " " << x.se << "\n";
        else cout << "-1\n";
    }
}