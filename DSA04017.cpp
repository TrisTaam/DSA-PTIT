#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n],b[n];
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-2) cin >> b[i];
        foru(i,0,n-1)
            if (a[i]!=b[i]){
                cout << i+1 << "\n";
                break;
            }
    }
}