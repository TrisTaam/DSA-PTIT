#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=55;
int t,n;
ll a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    foru(i,4,50) a[i]=a[i-1]+a[i-2]+a[i-3];
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}