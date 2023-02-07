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
int t,n,x,ans,cnt;
ii a[N];
bool b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> x >> a[i].se >> a[i].fi;
        sort(a,a+n,greater<ii>());
        ans=cnt=0;
        fill(b,false);
        foru(i,0,n-1)
            ford(j,min(n,a[i].se),1)
                if (!b[j]){
                    ans+=a[i].fi;
                    cnt++;
                    b[j]=true;
                    break;
                }
        cout << cnt << " " << ans << "\n";
    }
}