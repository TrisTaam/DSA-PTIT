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
vector<int> a[N],b;
bool vst[N],kt;

void dfs(int x,int y,int par){
    vst[y]=true;
    b.push_back(y);
    for(int z:a[y]){
        if (!vst[z]){
            dfs(x,z,y);
            b.pop_back();
        }
        else if (z==x&&par!=x){
            for(int p:b) cout << p << " ";
            cout << "1";
            kt=true;
            return;
        }
        if (kt) return;
    }
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
        b.clear();
        kt=false;
        dfs(1,1,0);
        if (!kt) cout << "NO";
        cout << "\n";
    }
}