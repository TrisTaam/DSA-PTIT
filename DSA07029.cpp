#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a,c;
string s,s2,s3;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        a=0;
        stack<int> b;
        stack<string> s1;
        s1.push("");
        foru(i,0,s.size()-1){
            if (isdigit(s[i])) a=a*10+s[i]-'0';
            else{
                if (a) b.push(a);
                a=0;
                if (s[i]=='['){
                    s1.push(string(1,s[i]));
                    if (!i||!isdigit(s[i-1])) b.push(1);
                }
                else if (s[i]!=']') s1.top()+=s[i];
                else{
                    s1.top().erase(0,1);
                    s3=s1.top();s1.pop();
                    foru(i,1,b.top()) s1.top()+=s3;
                    b.pop();
                }
            }
        }
        cout << s1.top() << "\n";
    }
}