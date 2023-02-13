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
int t,n,m,x,y,ans;
vector<int> a[N],b;
bool vst[N];

void dfs(int x){
    vst[x]=true;
    for(int y:a[x])
        if (!vst[y]) dfs(y);
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
        fill(vst,false);
        ans=0;
        foru(i,1,n)
            if (!vst[i]){
                ans++;
                dfs(i);
            }
        cout << ans << "\n";
    }
}