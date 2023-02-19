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
int t,n,a[N],l[N],r[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i];
        l[0]=0;
        foru(i,1,n){
            l[i]=a[i];
            foru(j,0,i-1)
                if (a[i]>a[j]) l[i]=max(l[i],l[j]+a[i]);
        }
        r[n+1]=0;
        ford(i,n,1){
            r[i]=a[i];
            foru(j,i+1,n)
                if (a[i]>a[j]) r[i]=max(r[i],r[j]+a[i]);
        }
        ans=INT_MIN;
        foru(i,1,n) ans=max(ans,l[i]+r[i]-a[i]);
        cout << ans << "\n";
    }
}