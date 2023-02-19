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
const int du=1e9+7;
int t,n,a[N],b[N][10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[1]=10;
    foru(i,0,9) b[1][i]=1;
    foru(i,2,100)
        foru(j,0,9){
            b[i][j]=0;
            foru(z,j,9) b[i][j]=(b[i][j]+b[i-1][z])%du;
            a[i]=(a[i]+b[i][j])%du;
        }
    cin >> t;
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}