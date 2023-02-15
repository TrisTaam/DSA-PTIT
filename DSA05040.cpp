#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,n,a[N],l[N],r[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i];
        a[0]=l[0]=0;
        foru(i,1,n)
            if (a[i]>a[i-1]) l[i]=l[i-1]+1;
            else l[i]=1;
        a[n+1]=r[n+1]=0;
        ford(i,n,1)
            if (a[i]>a[i+1]) r[i]=r[i+1]+1;
            else r[i]=1;
        ans=0;
        foru(i,1,n) ans=max(ans,l[i]+r[i]-1);
        cout << ans << "\n";
    }
}