#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n;
ll a,ans,a1,a2;
priority_queue<ll,vector<ll>,greater<ll>> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> a;
            b.push(a);
        }
        ans=0;
        while(b.size()>1){
            a1=b.top();b.pop();
            a2=b.top();b.pop();
            ans+=(a1+a2);
            b.push(a1+a2);
        }
        b.pop();
        cout << ans << "\n";
    }
}