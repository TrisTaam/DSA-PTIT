#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e4+5;
int t,n,a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        cout << max(a[0]*a[1],max(a[n-2]*a[n-1],max(a[0]*a[1]*a[n-1],a[n-3]*a[n-2]*a[n-1])));
    }
}