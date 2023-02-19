#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<ll,ll>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
ll a,b,c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> a >> b;
        while(b%a){
            c=b/a;
            cout << "1/" << c+1 << " + ";
            a=a*(c+1)-b;
            b*=(c+1);
        }
        cout << "1/" << b/a << "\n";
    }
}