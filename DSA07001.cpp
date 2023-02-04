#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int a;
string s;
vector<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> s){
        if (s=="push"){
            cin >> a;
            b.push_back(a);
        }
        else if (s=="show"){
            if (b.empty()) cout << "empty";
            else
                for(int x:b) cout << x << " ";
            cout << "\n";
        }
        else if (s=="pop")
            if (!b.empty()) b.pop_back();
    }
}