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
char a;
string s,s1;

void tried(int i){
    foru(j,i,s.size()-1){
        s1+=s[j];
        if (s1.size()==k) cout << s1 << "\n";
        else tried(j);
        s1.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> a >> k;
        s="";
        foru(i,'A',a) s+=char(i);
        tried(0);
    }
}