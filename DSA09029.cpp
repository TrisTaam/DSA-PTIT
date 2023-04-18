#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n,m,x,y;
vector<int> a[N];
bool vst[N],kt;

void dfs(int i,int x){
    for(int y:a[x])
        if (!vst[y]){
            vst[y]=true;
            if (i==n){
                kt=true;
                return;
            }
            dfs(i+1,y);
            if (kt) return;
            vst[y]=false;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,N-1) a[i].clear();
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        fill(vst,false);
        kt=false;
        foru(i,1,n){
            dfs(1,i);
            if (kt) break;
        }
        cout << (int)kt << "\n";
    }
}