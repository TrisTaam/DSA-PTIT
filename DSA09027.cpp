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
int t,n,m,x,y,q;
vector<int> a[N];
bool vst[N];

bool bfs(int x,int y){
    queue<int> q;
    q.push(x);
    vst[x]=true;
    int z;
    while(!q.empty()){
        z=q.front();q.pop();
        if (z==y) return true;
        for(int p:a[z])
            if (!vst[p]){
                q.push(p);
                vst[p]=true;
            }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n) a[i].clear();
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        foru(i,1,n)
            if (!a[i].empty()) sort(a[i].begin(),a[i].end());
        cin >> q;
        while(q--){
            cin >> x >> y;
            fill(vst,false);
            cout << (bfs(x,y)?"YES":"NO") << "\n";
        }
    }
}