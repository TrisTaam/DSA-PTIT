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
int t,n,x,y;
vector<int> a[N];
bool vst[N],kt;

void dfs(int x){
    vst[x]=true;
    for(int y:a[x]){
        if (vst[y]){
            kt=false;
            return;
        }
        if (!kt) return;
        dfs(y);
    }
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
        }
        foru(i,1,n){
            fill(vst,false);
            kt=true;
            dfs(i);
            if (!kt) break;
        }
        cout << (kt?"YES":"NO") << "\n";
    }
}