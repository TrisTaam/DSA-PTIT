#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;
vector<int> a={2,3,5,7,11,13,17,19,23,29,31};
ll ans;

void tried(int i,int cnt,ll s){
    if (cnt>n) return;
    if (cnt==n) ans=min(ans,s);
    for(int j=1;;++j){
        if (s*a[i]>ans) break;
        s*=a[i];
        if (s<0) break;
        tried(i+1,cnt*(j+1),s);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ans=LLONG_MAX;
        tried(0,1,1);
        cout << ans << "\n";
    }
}