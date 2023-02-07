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
int t,n,a[N],l[N],r[N];
vector<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i];
        l[1]=a[1];
        foru(i,2,n) l[i]=max(l[i-1],a[i]);
        r[n]=a[n];
        ford(i,n-1,1) r[i]=min(r[i+1],a[i]);
        b.clear();
        foru(i,1,n-1)
            if (l[i]<=r[i+1]) b.push_back(i);
        cout << b.size() << "\n";
        for(int x:b) cout << x << " ";
        cout << "\n";
    }
}