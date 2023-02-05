#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,ans;
ll n;
queue<string> a;
vector<string> b;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        a.push("6");
        a.push("8");
        cin >> n;
        ans=0;
        b.clear();
        while(1){
            s=a.front();a.pop();
            if (s.size()>n) break;
            b.push_back(s);
            a.push(s+"6");
            a.push(s+"8");
        }
        while(!a.empty()) a.pop();
        cout << b.size() << "\n";
        ford(i,b.size()-1,0) cout << b[i] << " ";
        cout << "\n";
    }
}