#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int du=123456789;
int t;
ll n,k;

ll pow1(ll a,ll b){
    if (!b) return 1;
    ll c=pow1(a,b/2);
    c=(c*c)%du;
    if (b&1) return (c*a)%du;
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cout << pow1(2,n-1) << "\n";
    }
}