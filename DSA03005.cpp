#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=55;
int t,n,k,a[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        ans=0;
        k=min(k,n-k);
        foru(i,0,k-1) ans+=a[i];
        foru(i,k,n-1) ans-=a[i];
        cout << abs(ans) << "\n";
    }
}