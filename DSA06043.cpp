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
int t,n,a[N],b[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b[0]=0;
        foru(i,1,n){
            cin >> a[i];
            b[i]=b[i-1]+a[i];
        }
        ans=-1;
        foru(i,1,n)
            if (b[i-1]==b[n]-b[i]){
                ans=i;
                break;
            }
        cout << ans << "\n";
    }
}