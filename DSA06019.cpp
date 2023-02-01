#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a;
map<int,int> b;
vector<ii> c;

bool cmp(ii a,ii b){
    if (a.se<b.se) return false;
    if (a.se==b.se) return a.fi<b.fi;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        while(n--){
            cin >> a;
            b[a]++;
        }
        c.clear();
        for(auto x:b) c.push_back({x.fi,x.se});
        sort(c.begin(),c.end(),cmp);
        for(ii x:c)
            foru(i,1,x.se) cout << x.fi << " ";
        cout << "\n";
    }
}