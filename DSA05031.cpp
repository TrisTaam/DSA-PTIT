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

bool check(int n){
    int a=(int)sqrt(n);
    return a*a==n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    foru(i,1,1e4) a[i]=INT_MAX;
    foru(i,1,1e4)
        if (check(i)) a[i]=1;
        else
            foru(j,1,i-1) a[i]=min(a[i],a[j]+a[i-j]);
    cin >> t;
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}