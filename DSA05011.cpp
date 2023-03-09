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
const int K=5e4+5;
const int du=1e9+7;
int t,n,k;
ll a[N][K];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        fill(a,0);
        foru(i,1,9) a[1][i]=1;
        foru(i,2,n)
            ford(j,k,0)
                foru(z,0,9)
                    if (j>=z) a[i][j]=(a[i][j]+a[i-1][j-z])%du;
        cout << a[n][k] << "\n";
    }
}