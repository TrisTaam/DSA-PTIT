#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=5005;
int t,n,b;
ll k,a[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        ans=0;
        foru(i,0,n-2)
            foru(j,i+1,n-1){
                b=lower_bound(a+j+1,a+n,k-a[i]-a[j])-a;
                ans+=(b-j-1);
            }
        cout << ans << "\n";
    }
}