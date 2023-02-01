#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a;
set<int> b;
set<int>::iterator it;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        while(n--){
            cin >> a;
            b.insert(a);
        }
        if (b.size()==1) cout << "-1";
        else{
            it=b.begin();
            cout << *it << " ";
            it++;
            cout << *it;
        }
        cout << "\n";
    }
}