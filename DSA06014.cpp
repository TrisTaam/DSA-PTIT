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
bool a[N],kt;

void sieve(){
    fill(a,true);
    a[0]=a[1]=false;
    for(int i=2;i*i<=1e6;++i)
        if (a[i])
            for(int j=i*i;j<=1e6;j+=i) a[j]=false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    cin >> t;
    while(t--){
        cin >> n;
        kt=false;
        foru(i,2,n/2)
            if (a[i]&&a[n-i]){
                cout << i << " " << n-i;
                kt=true;
                break;
            }
        if (!kt) cout << -1;
        cout << "\n";
    }
}