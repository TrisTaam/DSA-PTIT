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
int t,n,m,a[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m) cin >> a[i][j];
        ford(i,n,1)
            ford(j,m,1)
                if (i==n&&j==m) a[i][j]+=0;
                else if (i==n) a[i][j]+=a[i][j+1];
                else if (j==m) a[i][j]+=a[i+1][j];
                else a[i][j]+=min(a[i+1][j],min(a[i][j+1],a[i+1][j+1]));
        cout << a[1][1] << "\n";
    }
}