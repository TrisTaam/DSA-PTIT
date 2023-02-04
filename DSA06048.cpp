#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,ans;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n+1];
        a[0]=LLONG_MIN;
        ans=0;
        kt=true;
        foru(i,1,n){
            cin >> a[i];
            if (kt&&a[i]>=a[i-1]) ans++;
            else kt=false;
        }
        cout << (ans==n?0:ans) << "\n";
    }
}