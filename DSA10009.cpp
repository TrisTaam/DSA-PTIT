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
int n,m,x,y,w,a[N][N],q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    foru(i,1,n)
        foru(j,1,n) a[i][j]=1e9;
    foru(i,1,m){
        cin >> x >> y >> w;
        a[x][y]=w;
        a[y][x]=w;
    }
    foru(i,1,n) a[i][i]=0;
    foru(i,1,n)
        foru(j,1,n)
            foru(z,1,n) a[j][z]=min(a[j][z],a[j][i]+a[i][z]);
    cin >> q;
    while(q--){
        cin >> x >> y;
        cout << a[x][y] << "\n";
    }
}