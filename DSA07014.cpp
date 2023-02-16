#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,b,c;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<int> a;
        ford(i,s.size()-1,0)
            if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                b=a.top();a.pop();
                c=a.top();a.pop();
                if (s[i]=='+') b+=c;
                else if (s[i]=='-') b-=c;
                else if (s[i]=='*') b*=c;
                else b/=c;
                a.push(b);
            }
            else a.push(s[i]-'0');
        cout << a.top() << "\n";
    }
}