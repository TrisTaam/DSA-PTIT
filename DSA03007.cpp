#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e7+5;
int t,n;
ll ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n],b[n];
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-1) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,greater<ll>());
        ans=0;
        foru(i,0,n-1) ans+=a[i]*b[i];
        cout << ans << "\n";
    }
}