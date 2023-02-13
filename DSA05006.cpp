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
int t,n,a[N],b[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        ans=INT_MIN;
        foru(i,0,n-1){
            b[i]=a[i];
            foru(j,0,i-1)
                if (a[i]>a[j]) b[i]=max(b[i],b[j]+a[i]);
            ans=max(ans,b[i]);
        }
        cout << ans << "\n";
    }
}