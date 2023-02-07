#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        a=n/7;
        kt=false;
        ford(i,a,0)
            if ((n-i*7)%4==0){
                foru(j,1,(n-i*7)/4) cout << 4;
                foru(j,1,i) cout << 7;
                kt=true;
                break;
            }
        if (!kt) cout << -1;
        cout << "\n";
    }
}