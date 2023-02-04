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
int t,n,minpos,ans;
ii a[N];

bool cmp(ii a,ii b){
    if (a.fi<b.fi) return true;
    if (a.fi==b.fi&&a.se>b.se) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1){
            cin >> a[i].fi;
            a[i].se=i;
        }
        sort(a,a+n,cmp);
        ans=INT_MIN;
        minpos=a[0].se;
        foru(i,1,n-1){
            ans=max(ans,a[i].se-minpos);
            if (minpos>a[i].se) minpos=a[i].se;
        }
        cout << ans << "\n";
    }
}