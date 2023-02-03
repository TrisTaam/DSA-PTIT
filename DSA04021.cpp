#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=100;
int t,n;
ll k,a[N];

int find(int n,ll k){
    if (n==1&&k==1) return 0;
    if (n==2&&k==1) return 1;
    if (k>a[n-2]) return find(n-1,k-a[n-2]);
    return find(n-2,k);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[1]=a[2]=1;
    foru(i,3,93) a[i]=a[i-1]+a[i-2];
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << find(n,k) << "\n";
    }
}