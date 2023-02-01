#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,a[N],b[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    b[0]=1;
    foru(i,1,10) b[i]=b[i-1]*i;
    while(t--){
        cin >> n;
        ans=1;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-1){
            ans+=(a[i]-1)*b[n-i-1];
            foru(j,i+1,n-1)
                if (a[j]>a[i]) a[j]--;
        }
        cout << ans << "\n";
    }
}