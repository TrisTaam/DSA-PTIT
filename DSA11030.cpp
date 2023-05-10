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
int t,n,x,y,q;
vector<int> a[N];

int bfs(int s,int e){
    queue<ii> q;
    q.push({s,0});
    bool vst[N]={0};
    vst[s]=true;
    ii x;
    while(!q.empty()){
        x=q.front();q.pop();
        if (x.fi==e) return x.se;
        for(int y:a[x.fi])
            if (!vst[y]){
                vst[y]=true;
                q.push({y,x.se+1});
            }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) a[i].clear();
        foru(i,1,n-1){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cin >> q;
        while(q--){
            cin >> x >> y;
            cout << bfs(x,y) << "\n";
        }
    }
}