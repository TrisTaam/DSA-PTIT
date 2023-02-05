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
stack<string> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        s+=" ";
        s1="";
        for(char x:s)
            if (x==' '){
                a.push(s1);
                s1="";
            }
            else s1+=x;
        while(!a.empty()){
            cout << a.top() << " ";
            a.pop();
        }
        cout << "\n";
    }
}