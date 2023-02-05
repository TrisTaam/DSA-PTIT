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
int t,n,m,a[N][N],ans,u,v;
bool b[N][N];
pair<ii,int> x;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m){
                cin >> a[i][j];
                b[i][j]=false;
            }
        queue<pair<ii,int>> q;
        q.push({{1,1},0});
        b[1][1]=true;
        ans=-1;
        while(!q.empty()){
            x=q.front();q.pop();
            if (x.fi.fi==n&&x.fi.se==m){
                ans=x.se;
                break;
            }
            u=x.fi.fi;
            v=x.fi.se+a[x.fi.fi][x.fi.se];
            if (u>=1&&u<=n&&v>=1&&v<=m&&!b[u][v]){
                q.push({{u,v},x.se+1});
                b[u][v]=true;
            }
            u=x.fi.fi+a[x.fi.fi][x.fi.se];
            v=x.fi.se;
            if (u>=1&&u<=n&&v>=1&&v<=m&&!b[u][v]){
                q.push({{u,v},x.se+1});
                b[u][v]=true;
            }
        }
        cout << ans << "\n";
    }
}