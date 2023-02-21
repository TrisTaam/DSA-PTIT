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
int t,n,m,x,y;
vector<int> a[N];
bool vst[N];

bool dfs(int x,int par){
    vst[x]=true;
    for(int y:a[x])
        if (!vst[y]){
            if (dfs(y,x)) return true;
        }
        else if (y!=par) return true;
    return false;
}

bool res(){
    foru(i,1,n)
        if (!vst[i]){
            if (dfs(i,0)) return true;
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
        fill(vst,0);
        cout << (res()?"YES":"NO") << "\n";
    }
}