#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,p,s;
vector<int> a,b;
vector<vector<int>> c;

bool nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return n>1;
}

void tried(int i){
    foru(j,i,a.size()-1){
        s-=a[j];
        b.push_back(a[j]);
        if (b.size()==n){
            if (!s) c.push_back(b);
        }
        else if (s>0) tried(j+1);
        s+=a[j];
        b.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> p >> s;
        a.clear();
        foru(i,p+1,s)
            if (nt(i)) a.push_back(i);
        if (a.empty()) cout << "0\n";
        else{
            b.clear();
            c.clear();
            tried(0);
            cout << c.size() << "\n";
            for(auto x:c){
                for(int y:x) cout << y << " ";
                cout << "\n";
            }
        }
    }
}