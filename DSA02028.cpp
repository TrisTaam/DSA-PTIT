#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,k,a,b[N],s,ans;

void tried(int i,int j){
    foru(z,j,n)
        if (b[z]-b[j-1]==b[n]/k){
            if (i==k&&z==n) ans++;
            else if (i<k) tried(i+1,z+1);
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> k;
        b[0]=0;
        foru(i,1,n){
            cin >> a;
            b[i]=b[i-1]+a;
        }
        if (b[n]%k) cout << 0;
        else{
            ans=0;
            tried(1,1);
            cout << ans << "\n";
        }
    }
}