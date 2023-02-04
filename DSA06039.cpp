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
int t,n,a[N],ans;
map<int,int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        foru(i,0,n-1){
            cin >> a[i];
            b[a[i]]++;
        }
        ans=-1;
        foru(i,0,n-1)
            if (b[a[i]]>1){
                ans=a[i];
                break;
            }
        if (ans==-1) cout << "NO";
        else cout << ans;
        cout << "\n";
    }
}