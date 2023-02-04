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
int t,n,a[N],pos,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        ans=0;
        foru(i,0,n-2){
            pos=i;
            foru(j,i+1,n-1)
                if (a[pos]>a[j]) pos=j;
            if (pos>i) ans++;
            swap(a[i],a[pos]);
        }
        cout << ans << "\n";
    }
}