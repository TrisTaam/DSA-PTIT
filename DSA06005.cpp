#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,n,m,a[N],b[N];
vector<int> c,d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,m-1) cin >> b[i];
        sort(a,a+n);
        sort(b,b+m);
        c.clear();
        foru(i,0,n-1) c.push_back(a[i]);
        d.clear();
        foru(i,0,m-1)
            if (!binary_search(a,a+n,b[i])) c.push_back(b[i]);
            else d.push_back(b[i]);
        sort(c.begin(),c.end());
        for(int x:c) cout << x << " ";
        cout << "\n";
        for(int x:d) cout << x << " ";
        cout << "\n";
    }
}