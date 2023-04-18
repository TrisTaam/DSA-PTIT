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

void bfs(int u){
    queue<int> q;
    bool vst[N]={0};
    q.push(u);
    vst[u]=true;
    int v;
    vector<ii> b;
    while(!q.empty()){
        v=q.front();q.pop();
        for(int y:a[v])
            if (!vst[y]){
                vst[y]=true;
                q.push(y);
                b.push_back({v,y});
            }
    }
    if (b.size()<n-1) cout << "-1\n";
    else
        foru(i,0,n-2) cout << b[i].fi << " " << b[i].se << "\n";
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
        bfs(u);
    }
}