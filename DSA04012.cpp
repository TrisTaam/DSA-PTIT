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
int t,n,m,a[N],b[N],c[N*2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,m-1) cin >> b[i];
        fill(c,0);
        foru(i,0,n-1)
            foru(j,0,m-1) c[i+j]+=a[i]*b[j];
        foru(i,0,n+m-2) cout << c[i] << " ";
        cout << "\n";
    }
}