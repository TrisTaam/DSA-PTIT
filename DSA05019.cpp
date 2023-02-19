#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=505;
int t,n,m,a[N][N],b[N][N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m){
                cin >> a[i][j];
                b[i][j]=true;
            };
        ans=0;
        foru(i,1,n)
            foru(j,1,m)
                if (a[i][j]&&a[i-1][j]&&a[i][j-1]&&a[i-1][j-1]){
                    b[i][j]=min(b[i-1][j],min(b[i][j-1],b[i-1][j-1]))+1;
                    ans=max(ans,b[i][j]);
                }
        cout << ans << "\n";
    }
}