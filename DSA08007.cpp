#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,ans;
ll n;
queue<string> a;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        a.push("1");
        cin >> n;
        ans=0;
        while(1){
            s=a.front();a.pop();
            if (stoll(s)>n) break;
            ans++;
            a.push(s+"0");
            a.push(s+"1");
        }
        while(!a.empty()) a.pop();
        cout << ans << "\n";
    }
}