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
int t,n,x,y,z,a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> x >> y >> z;
        a[1]=x;
        foru(i,2,n+1){
            a[i]=a[i-1]+x;
            if (i%2==0) a[i]=min(a[i],a[i/2]+z);
            a[i-1]=min(a[i-1],a[i]+y);
        }
        cout << a[n] << "\n";
    }
}