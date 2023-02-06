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
        a.push("9");
        cin >> n;
        while(1){
            s=a.front();a.pop();
            if (stoll(s)%n==0){
                cout << s << "\n";
                break;
            }
            a.push(s+"0");
            a.push(s+"9");
        }
        while(!a.empty()) a.pop();
    }
}