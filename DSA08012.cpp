#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,l,r,ans;

bool res(int n){
    int a;
    bool b[10]={0};
    while(n){
        a=n%10;
        if (a>5) return false;
        if (b[a]) return false;
        b[a]=true;
        n/=10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> l >> r;
        ans=0;
        foru(i,l,r) ans+=res(i);
        cout << ans << "\n";
    }
}