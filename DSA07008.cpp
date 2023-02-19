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

int res(char x){
    if (x=='^') return 3;
    if (x=='*'||x=='/') return 2;
    if (x=='+'||x=='-') return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        s1=s2="";
        for(char x:s)
            if (isalpha(x)) s1+=x;
            else if (x=='(') s2+=x;
            else if (x==')'){
                while(!s2.empty()&&s2.back()!='('){
                    s1+=s2.back();
                    s2.pop_back();
                }
                s2.pop_back();
            }
            else if (res(x)){
                while(!s2.empty()&&res(s2.back())>=res(x)){
                    s1+=s2.back();
                    s2.pop_back();
                }
                s2+=x;
            }
        while(!s2.empty()){
            if (s2.back()!='(') s1+=s2.back();
            s2.pop_back();
        }
        cout << s1 << "\n";
    }
}