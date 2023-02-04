#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a,ans1,ans2;
map<int,int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        foru(i,0,n-1){
            cin >> a;
            b[a]++;
        }
        ans1=INT_MIN;
        for(auto x:b)
            if (ans1<x.se){
                ans1=x.se;
                ans2=x.fi;
            }
        if (ans1>n/2) cout << ans2;
        else cout << "NO";
        cout << "\n";
    }
}