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

string res(string s){
    stack<string> s1;
    string s2;
    if (s[0]!='(') s="("+s+")";
    s1.push("");
    for(char x:s)
        if (x=='(') s1.push("");
        else if (x!=')') s1.top()+=x;
        else{
            s2=s1.top();s1.pop();
            if (s1.top().back()!='-') s1.top()+=s2;
            else{
                for(char y:s2)
                    if (y=='+') s1.top()+='-';
                    else if (y=='-') s1.top()+='+';
                    else s1.top()+=y;
            }
        }
    return s1.top();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        cout << (res(s1)==res(s2)?"YES":"NO") << "\n";
    }
}