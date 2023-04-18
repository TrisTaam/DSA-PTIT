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
ll x,y;
string s;
vector<string> a,b,c;

int res(string x){
    if (x=="*"||x=="/") return 2;
    if (x=="+"||x=="-") return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        a.clear();
        b.clear();
        foru(i,0,s.size()-1)
            if (isdigit(s[i])){
                if (a.empty()||!isdigit(s[i-1])) a.push_back(string(1,s[i]));
                else a.back()+=s[i];
            }
            else if (s[i]=='(') b.push_back(string(1,s[i]));
            else if (s[i]==')'){
                while(!b.empty()&&b.back()!="("){
                    a.push_back(b.back());
                    b.pop_back();
                }
                b.pop_back();
            }
            else if (res(string(1,s[i]))){
                while(!b.empty()&&res(b.back())>=res(string(1,s[i]))){
                    a.push_back(b.back());
                    b.pop_back();
                }
                b.push_back(string(1,s[i]));
            }
        while(!b.empty()){
                a.push_back(b.back());
                b.pop_back();
            }
        c.clear();
        foru(i,0,a.size()-1)
            if (!res(a[i])) c.push_back(a[i]);
            else{
                y=stoll(c.back());c.pop_back();
                x=stoll(c.back());c.pop_back();
                if (a[i]=="+") c.push_back(to_string(x+y));
                else if (a[i]=="-") c.push_back(to_string(x-y));
                else if (a[i]=="*") c.push_back(to_string(x*y));
                else c.push_back(to_string(x/y));
            }
        cout << c[0] << "\n";
    }
}