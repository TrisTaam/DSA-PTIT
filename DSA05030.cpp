#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=30;
int t,n,m;
ll a[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        fill(a,0);
        foru(i,1,n+1)
            foru(j,1,m+1)
                if (i==1&&j==1) a[i][j]=1;
                else a[i][j]=a[i-1][j]+a[i][j-1];
        cout << a[n+1][m+1] << "\n";
    }
}