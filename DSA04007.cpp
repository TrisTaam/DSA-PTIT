#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,k;
string s1,s2;

string add(string s1,string s2,int k){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    string s="";
    int a,b=0;
    ford(i,s1.size()-1,0){
        a=s1[i]+s2[i]-'0'*2+b;
        s=char(a%k+'0')+s;
        b=a/k;
    }
    if (b) s=char(b+'0')+s;
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> k >> s1 >> s2;
        cout << add(s1,s2,k) << "\n";
    }
}