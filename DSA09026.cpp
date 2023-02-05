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
int t,n,m,s,e,x,y;
vector<int> a[N],b;
bool vst[N];

string bfs(int x,int y){
    queue<pair<int,string>> q;
    q.push({x,to_string(x)});
    vst[x]=true;
    pair<int,string> z;
    while(!q.empty()){
        z=q.front();q.pop();
        if (z.fi==y) return z.se;
        for(int p:a[z.fi])
            if (!vst[p]){
                q.push({p,z.se+" "+to_string(p)});
                vst[p]=true;
            }
    }
    return "-1";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m >> s >> e;
        foru(i,1,n) a[i].clear();
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
        }
        foru(i,1,n)
            if (!a[i].empty()) sort(a[i].begin(),a[i].end());
        fill(vst,false);
        cout << bfs(s,e) << "\n";
    }
}