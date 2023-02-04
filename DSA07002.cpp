#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a;
string s;
stack<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        if (s=="PUSH"){
            cin >> a;
            b.push(a);
        }
        else if (s=="PRINT"){
            if (b.empty()) cout << "NONE";
            else cout << b.top();
            cout << "\n";
        }
        else if (s=="POP")
            if (!b.empty()) b.pop();
    }
}