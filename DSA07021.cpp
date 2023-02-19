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
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<int> a;
        a.push(-1);
        ans=0;
        foru(i,0,s.size()-1)
            if (s[i]=='(') a.push(i);
            else{
                a.pop();
                if (!a.empty()) ans=max(ans,i-a.top());
                else a.push(i);
            }
        cout << ans << "\n";
    }
}