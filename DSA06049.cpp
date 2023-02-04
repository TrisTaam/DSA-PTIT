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
int t,n,k,a[N];
queue<int> b;
ll ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        ans=0;
        foru(i,0,n-1){
            while(!b.empty()&&a[i]-b.front()>=k) b.pop();
            ans+=b.size();
            b.push(a[i]);
        }
        cout << ans << "\n";
        while(!b.empty()) b.pop();
    }
}