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
int t,n;
pair<double,double> a[N];
double ans;

bool cmp1(pair<double,double> a,pair<double,double> b){
    if (a.fi<b.fi) return true;
    if (a.fi==b.fi&&a.se<b.se) return true;
    return false;
}

bool cmp2(pair<double,double> a,pair<double,double> b){
    if (a.se<b.se) return true;
    if (a.se==b.se&&a.fi<b.fi) return true;
    return false;
}

double dis(pair<double,double> a,pair<double,double> b){
    return sqrt(pow(a.fi-b.fi,2)+pow(a.se-b.se,2));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cout << setprecision(6) << fixed;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i].fi >> a[i].se;
        sort(a,a+n,cmp1);
        ans=LLONG_MAX;
        foru(i,0,n-2) ans=min(ans,dis(a[i],a[i+1]));
        sort(a,a+n,cmp2);
        foru(i,0,n-2) ans=min(ans,dis(a[i],a[i+1]));
        cout << ans << "\n";
    }
}