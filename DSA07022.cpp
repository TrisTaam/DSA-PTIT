#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n,a[N],c[N];
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
        stack<int> s;
        ford(i,n-1,0){
            while(!s.empty()&&b[a[i]]>=b[a[s.top()]]) s.pop();
            if (s.empty()) c[i]=-1;
            else c[i]=a[s.top()];
            s.push(i);
        }
        foru(i,0,n-1) cout << c[i] << " ";
        cout << "\n";
    }
}