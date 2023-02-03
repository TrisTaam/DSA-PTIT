#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int du=1e9+7;
int t;
ll a,b;

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
    while(1){
        cin >> a >> b;
        if (!a&&!b) break;
        cout << pow1(a,b) << "\n";
    }
}