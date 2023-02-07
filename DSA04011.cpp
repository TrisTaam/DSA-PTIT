#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
string s1,s2;

ll res(string s){
    ll ans=0;
    ll x=1;
    ford(i,s.size()-1,0){
        ans+=x*(s[i]-'0');
        x*=2;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        cout << res(s1)*res(s2) << "\n";
    }
}