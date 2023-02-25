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
const int K=1005;
int t,n,k,a[N],b[N][K];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,1,n){
            cin >> a[i];
            a[i]%=k;
        }
        foru(i,1,k-1) b[1][i]=INT_MIN;
        b[1][a[1]]=1;
        foru(i,2,n)
            foru(j,0,k-1) b[i][j]=max(b[i-1][j],b[i-1][(j-a[i]+k)%k]+1);
        cout << b[n][0] << "\n";
    }
}