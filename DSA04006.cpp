#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
ll n,l,r,ans;
string s;

ll res(ll n){
    if (n<1) return 0;
    if (n==1) return 1;
    ll a=(ll)log2(n);
    if (!(n&(n-1))) return s[a]-'0';
    a=pow(2,a);
    return res(n-a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> l >> r;
        s="";
        while(n){
            s=char(n%2+'0')+s;
            n/=2;
        }
        ans=0;
        for(ll i=l;i<=r;++i) ans+=res(i);
        cout << ans << "\n";
    }
}