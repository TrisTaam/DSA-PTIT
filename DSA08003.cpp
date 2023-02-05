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
deque<int> a;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        if (s=="PUSHBACK"){
            cin >> x;
            a.push_back(x);
        }
        else if (s=="PUSHFRONT"){
            cin >> x;
            a.push_front(x);
        }
        else if (s=="PRINTFRONT"){
            if (a.empty()) cout << "NONE";
            else cout << a.front();
            cout << "\n";
        }
        else if (s=="PRINTBACK"){
            if (a.empty()) cout << "NONE";
            else cout << a.back();
            cout << "\n";
        }
        else if (s=="POPFRONT"){
            if (!a.empty()) a.pop_front();
        }
        else{
            if (!a.empty()) a.pop_back();
        }
    }
}