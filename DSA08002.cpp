#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,x;
queue<int> a;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        if (s=="PUSH"){
            cin >> x;
            a.push(x);
        }
        else if (s=="PRINTFRONT"){
            if (a.empty()) cout << "NONE";
            else cout << a.front();
            cout << "\n";
        }
        else if (!a.empty()) a.pop();
    }
}