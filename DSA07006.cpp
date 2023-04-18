#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=2005;
string s,c;
vector<ii> a;
set<string> b;
bool d[N];

void res(string x){
    fill(d,false);
    foru(i,0,x.size()-1)
        if (x[i]-'0') d[a[i].fi]=d[a[i].se]=true;
    string ans="";
    foru(i,0,s.size()-1)
        if (!d[i]) ans+=s[i];
    if (ans==s) return;
    b.insert(ans);
}

void tried(int i){
    foru(j,'0','1'){
        c+=j;
        if (i==a.size()) res(c);
        else tried(i+1);
        c.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    stack<pair<char,int>> s1;
    foru(i,0,s.size()-1)
        if (s[i]=='(') s1.push({s[i],i});
        else if (s[i]==')'){
            a.push_back({s1.top().se,i});
            s1.pop();
        }
    tried(1);
    for(string x:b) cout << x << "\n";
}