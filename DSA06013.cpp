#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
const int A=1e6+5;
int t,n,x,a,b[A];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> x;
        fill(b,0);
        foru(i,0,n-1){
            cin >> a;
            b[a]++;
        }
        cout << (b[x]?b[x]:-1) << "\n";
    }
}