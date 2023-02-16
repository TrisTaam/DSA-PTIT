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
string s,s1,s2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<string> a;
        ford(i,s.size()-1,0)
            if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                s1=a.top();a.pop();
                s2=a.top();a.pop();
                a.push("("+s1+s[i]+s2+")");
            }
            else a.push(string(1,s[i]));
        cout << a.top() << "\n";
    }
}