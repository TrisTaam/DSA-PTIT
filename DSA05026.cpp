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
const int S=25005;
int t,n,s,a[N],b[N][S];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> s >> n;
        foru(i,1,n) cin >> a[i];
        foru(i,1,n)
            foru(j,1,s)
                if (a[i]<=j) b[i][j]=max(b[i-1][j],b[i-1][j-a[i]]+a[i]);
                else b[i][j]=b[i-1][j];
        cout << b[n][s] << "\n";
    }
}