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
int t,n,m,a[N],b[N],c[5],ans;

int res(int x){
    if (!x) return 0;
    if (x==1) return c[0];
    int ans=m-(upper_bound(b,b+m,x)-b);
    ans+=(c[0]+c[1]);
    if (x==2) ans-=(c[3]+c[4]);
    if (x==3) ans+=c[2];
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1) cin >> a[i];
        fill(c,0);
        foru(i,0,m-1){
            cin >> b[i];
            if (b[i]<5) c[b[i]]++;
        }
        sort(b,b+m);
        ans=0;
        foru(i,0,n-1) ans+=res(a[i]);
        cout << ans << "\n";
    }
}