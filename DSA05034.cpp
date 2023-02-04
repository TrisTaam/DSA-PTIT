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
const int du=1e9+7;
int t,n,k;
ll a[N],s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        a[0]=1;
        a[1]=1;
        s=2;
        foru(i,2,k){
            a[i]=s;
            s=(s+a[i])%du;
        }
        foru(i,k+1,n){
            s=(s-a[i-k-1]+du)%du;
            a[i]=s;
            s=(s+a[i])%du;
        }
        cout << a[n] << "\n";
    }
}