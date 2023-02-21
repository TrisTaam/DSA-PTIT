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
const int M=1e6+5;
int t,n,m,x,y,cnt1,cnt2;
vector<int> a[N];
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
        fill(vst,false);
        cnt1=0;
        foru(i,1,n)
            if (!vst[i]){
                cnt1++;
                dfs(i);
            }
        foru(i,1,n){
            fill(vst,false);
            vst[i]=true;
            cnt2=0;
            foru(j,1,n)
                if (!vst[j]){
                    cnt2++;
                    dfs(j);
                }
            if (cnt2>cnt1) cout << i << " ";
        }
        cout << "\n";
    }
}