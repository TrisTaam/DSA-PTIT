#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;
string s,s1;
ll tmp,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        s1="";
        foru(i,1,n) s1+="1";
        tmp=stoll(s1);
        ans=0;
        foru(i,0,s.size()-1){
            ans+=(s[i]-'0')*tmp*(i+1);
            tmp/=10;
        }
        cout << ans << "\n";
    }
}