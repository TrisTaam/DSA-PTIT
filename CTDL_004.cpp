#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n,k,a[N],b[N],ans;

void tried(int i,int j){
    foru(z,j,n)
        if (a[z]>=b[i-1]){
            b[i]=a[z];
            if (i==k) ans++;
            else tried(i+1,z+1);
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> k;
        foru(i,1,n) cin >> a[i];
        b[0]=0;
        ans=0;
        tried(1,1);
        cout << ans;
    }
}