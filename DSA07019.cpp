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
int t,n,a[N],l[N],r[N];
ll ans;
stack<int> s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        s=stack<int>{};
        foru(i,0,n-1){
            while(!s.empty()&&a[i]<=a[s.top()]) s.pop();
            if (s.empty()) l[i]=0;
            else l[i]=s.top()+1;
            s.push(i);
        }
        s=stack<int>{};
        ford(i,n-1,0){
            while(!s.empty()&&a[i]<=a[s.top()]) s.pop();
            if (s.empty()) r[i]=n-1;
            else r[i]=s.top()-1;
            s.push(i);
        }
        ans=LLONG_MIN;
        foru(i,0,n-1) ans=max(ans,(ll)a[i]*(r[i]-l[i]+1));
        cout << ans << "\n";
    }
}