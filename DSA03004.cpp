#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int t,n,a[N];
ll s1,s2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        s1=s2=0;
        for(int i=0;i<n;i+=2) s1=s1*10+a[i];
        for(int i=1;i<n;i+=2) s2=s2*10+a[i];
        cout << s1+s2 << "\n";
    }
}