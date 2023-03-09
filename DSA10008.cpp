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
int t,n,m,s,x,y,w;
vector<ii> a[N];

void dijktra(int s){
    vector<int> d(n+1,INT_MAX);
    d[s]=0;
    priority_queue<ii,vector<ii>,greater<ii>> q;
    q.push({s,0});
    ii x;
    while(!q.empty()){
        x=q.top();q.pop();
        if (x.second<=d[x.fi]){
            for(ii y:a[x.fi])
                if (d[y.fi]>d[x.fi]+y.se){
                    d[y.fi]=d[x.fi]+y.se;
                    q.push({y.fi,d[y.fi]});
                }
        }
    }
    foru(i,1,n) cout << d[i] << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        foru(i,1,n) a[i].clear();
        while(m--){
            cin >> x >> y >> w;
            a[x].push_back({y,w});
            a[y].push_back({x,w});
        }
        dijktra(s);
        cout << "\n";
    }
}