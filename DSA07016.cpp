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
string s,s1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<int> a;
        s1="";
        foru(i,0,s.size()){
            a.push(i+1);
            if (i==s.size()||s[i]=='I'){
                while(!a.empty()){
                    s1+=to_string(a.top());
                    a.pop();
                }
            }
        }
        cout << s1 << "\n";
    }
}