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
ll a[N],b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        b[0]=a[0];
        foru(i,1,n-1){
            b[i]=max(a[i],b[i-1]);
            if (i>1) b[i]=max(b[i],b[i-2]+a[i]);
        }
        cout << b[n-1] << "\n";
    }
}