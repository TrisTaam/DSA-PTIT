#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a,b;
string s,s1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        s1="";
        for(char x:s)
            if (s1.empty()) s1+=x;
            else if (s1.back()=='('&&x==')') s1.pop_back();
            else s1+=x;
        a=s1.size();
        b=0;
        while(!s1.empty()&&s1.back()=='('){
            b=!b;
            s1.pop_back();
        }
        cout << a/2+b << "\n";
    }
}