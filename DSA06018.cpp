#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a,l,r;
set<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        l=INT_MAX;
        r=INT_MIN;
        while(n--){
            cin >> a;
            b.insert(a);
            l=min(l,a);
            r=max(r,a);
        }
        cout << r-l+1-b.size() << "\n";
    }
}