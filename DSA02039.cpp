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
vector<int> b;
vector<vector<int>> c;

void tried(int i){
    ford(j,i,1){
        n-=j;
        b.push_back(j);
        if (!n) c.push_back(b);
        else if (n>0) tried(j);
        n+=j;
        b.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        c.clear();
        tried(n);
        cout << c.size() << "\n";
        for(auto x:c){
            cout << "(" << x[0];
            foru(i,1,x.size()-1) cout << " " << x[i];
            cout << ") ";
        }
        cout << "\n";
    }
}