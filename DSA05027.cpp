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
const int S=1005;
int t,n,s,a[N],b[N],c[N][S];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s;;
        foru(i,1,n) cin >> a[i];
        foru(i,1,n) cin >> b[i];
        foru(i,0,n)
            foru(j,0,s) c[i][j]=0;
        foru(i,1,n)
            foru(j,1,s)
                if (a[i]<=j) c[i][j]=max(c[i-1][j],c[i-1][j-a[i]]+b[i]);
                else c[i][j]=c[i-1][j];
        cout << c[n][s] << "\n";
    }
}