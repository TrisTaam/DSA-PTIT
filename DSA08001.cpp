#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,x,y;
queue<int> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> x;
            if (x==1) cout << a.size() << "\n";
            else if (x==2){
                if (a.empty()) cout << "YES";
                else cout << "NO";
                cout << "\n";
            }
            else if (x==3){
                cin >> y;
                a.push(y);
            }
            else if (x==4){
                if (!a.empty()) a.pop();
            }
            else if (x==5) cout << (a.empty()?-1:a.front()) << "\n";
            else cout << (a.empty()?-1:a.back()) << "\n";
        }
        while(!a.empty()) a.pop();
    }
}