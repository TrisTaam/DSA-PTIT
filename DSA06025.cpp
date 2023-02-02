#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n,a[N];
vector<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-1){
            cout << "Buoc " << i << ": ";
            b.push_back(a[i]);
            sort(b.begin(),b.end());
            for(int x:b) cout << x << " ";
            cout << "\n"; 
        }
    }
}