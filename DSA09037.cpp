#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int K=105;
const int N=1005;
int t,k,n,m,a[K],x,y,ans;
vector<int> b[N];
bool vst[N];

bool bfs(int s,int e){
    queue<int> q;
    q.push(s);
    fill(vst,false);
    vst[s]=true;
    int x;
    while(!q.empty()){
        x=q.front();q.pop();
        if (x==e) return true;
        for(int y:b[x])
            if (!vst[y]){
                q.push(y);
                vst[y]=true;
            }
    }
    return false;
}

bool res(int x){
    foru(i,1,k)
        if (!bfs(a[i],x)) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> k >> n >> m;
        foru(i,1,k){
            cin >> a[i];
            b[i].clear();
        }
        while(m--){
            cin >> x >> y;
            b[x].push_back(y);
        }
        ans=0;
        foru(i,1,n) ans+=res(i);
        cout << ans;
    }
}