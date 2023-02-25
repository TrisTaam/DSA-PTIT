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
int t,n,b[N],ans;
ii a[N];

bool cmp(ii a,ii b){
    if (a.se==b.se) return a.fi<b.fi;
    return a.se<b.se;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i].fi >> a[i].se;
        sort(a+1,a+n+1,cmp);
        ans=0;
        foru(i,1,n){
            b[i]=1;
            foru(j,1,i-1)
                if (a[i].fi>a[j].se) b[i]=max(b[i],b[j]+1);
            ans=max(ans,b[i]);
        }
        cout << ans << "\n";
    }
}