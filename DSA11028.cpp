#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,n,x,y;
vector<int> a[N];

int res(){
    bool vst[N]={false};
    queue<ii> q;
    q.push({1,0});
    vst[1]=true;
    ii x;
    int ans=0;
    while(!q.empty()){
        x=q.front();q.pop();
        ans=max(ans,x.se);
        for(int y:a[x.fi])
            if (!vst[y]){
                q.push({y,x.se+1});
                vst[y]=true;
            }
    }
    return ans;
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
        cout << res() << "\n";
    }
}