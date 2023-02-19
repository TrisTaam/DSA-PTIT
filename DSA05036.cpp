#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=505;
int t,n,b[N],ans;
pair<double,double> a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i].fi >> a[i].se;
        ans=0;
        foru(i,0,n-1){
            b[i]=1;
            foru(j,0,i-1)
                if (a[i].fi>a[j].fi&&a[i].se<a[j].se) b[i]=max(b[i],b[j]+1);
            ans=max(ans,b[i]);
        }
        cout << ans << "\n";
    }
}