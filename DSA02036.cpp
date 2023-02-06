#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=20;
int t,n,a[N],s;
vector<int> b;
vector<vector<int>> c;

void tried(int i){
    foru(j,i,n-1){
        s+=a[j];
        b.push_back(a[j]);
        if (s&1) c.push_back(b);
        if (j<n-1) tried(j+1);
        s-=a[j];
        b.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n,greater<int>());
        b.clear();
        c.clear();
        s=0;
        tried(0);
        sort(c.begin(),c.end());
        for(auto x:c){
            for(int y:x) cout << y << " ";
            cout << "\n";
        }
    }
}