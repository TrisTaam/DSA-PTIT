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
int t,n,m,a,b[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m) cin >> a;
        ford(i,n,1)
            ford(j,m,1)
                if (i==n&&j==m) b[i][j]=1;
                else if (i==n) b[i][j]=b[i][j+1];
                else if (j==m) b[i][j]=b[i+1][j];
                else b[i][j]=b[i+1][j]+b[i][j+1];
        cout << b[1][1] << "\n";
    }
}