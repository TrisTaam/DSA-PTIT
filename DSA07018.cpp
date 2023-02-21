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
string s1,s2,s;
map<int,int> a;

void perform(string s){
    int b,c=0;
    s+=" ";
    foru(i,0,s.size()-1)
        if (isdigit(s[i])) c=c*10+s[i]-'0';
        else if (s[i]=='^'){
            b=c;
            c=0;
        }
        else if (s[i]==' '){
            a[c]+=b;
            b=c=0;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s1);
        getline(cin,s2);
        a.clear();
        perform(s1);
        perform(s2);
        s="";
        for(auto x:a) s=" + "+to_string(x.se)+"*x^"+to_string(x.fi)+s;
        s.erase(0,3);
        cout << s << "\n";
    }
}