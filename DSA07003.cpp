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
string s;

bool res(){
    string s1="";
    for(char x:s)
        if (x=='('||x=='+'||x=='-'||x=='*'||x=='/') s1+=x;
        else if (x==')'){
            if (s1.back()=='(') return true;
            while(!s1.empty()&&s1.back()!='(') s1.pop_back();
            s1.pop_back();
        }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cout << (res()?"Yes":"No") << "\n";
    }
}