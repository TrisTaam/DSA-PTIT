#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
const int du=1e9+7;
int t,n,k,a[N];
ll b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,0,n-1) cin >> a[i];
        fill(b,0);
        b[0]=1;
        foru(i,1,k)
            foru(j,0,n-1)
                if (i>=a[j]) b[i]=(b[i]+b[i-a[j]])%du;
        cout << b[k] << "\n";
    }
}