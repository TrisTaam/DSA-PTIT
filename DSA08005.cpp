#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;
queue<string> a;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        a.push("1");
        cin >> n;
        while(n--){
            s=a.front();a.pop();
            cout << s << " ";
            a.push(s+"0");
            a.push(s+"1");
        }
        while(!a.empty()) a.pop();
        cout << "\n";
    }
}