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
const int du=1e9+7;
int t,n,k;
ll a[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    foru(i,1,1000) a[i][1]=i;
    foru(i,2,1000)
        foru(j,2,i) a[i][j]=(a[i-1][j-1]*i)%du;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << a[n][k] << "\n";
    }
}