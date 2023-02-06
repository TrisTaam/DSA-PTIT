#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int t,n,s,a[N];
vector<int> b;
vector<vector<int>> c;

void tried(int i){
    foru(j,i,n-1){
        s-=a[j];
        b.push_back(a[j]);
        if (!s) c.push_back(b);
        else if (s>0) tried(j);
        s+=a[j];
        b.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s;
        foru(i,0,n-1) cin >> a[i];
        b.clear();
        c.clear();
        tried(0);
        if (c.empty()) cout << -1;
        else{
            cout << c.size() << " ";
            for(auto x:c){
                cout << "{" << x[0];
                foru(i,1,x.size()-1) cout << " " << x[i];
                cout << "} ";
            }
        }
        cout << "\n";
    }
}