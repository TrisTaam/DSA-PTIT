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
int t,n;
ll a,b,ans;
priority_queue<ll,vector<ll>,greater<ll>> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> a;
            q.push(a%du);
        }
        ans=0;
        while(q.size()>1){
            a=q.top();q.pop();
            b=q.top();q.pop();
            ans=(ans+(a+b)%du)%du;
            q.push((a+b)%du);
        }
        q.pop();
        cout << ans << "\n";
    }
}