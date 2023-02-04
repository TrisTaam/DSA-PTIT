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
int t,n,a[N],pos;
vector<string> b;
vector<int> c;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        b.clear();
        foru(i,0,n-1){
            s="Buoc "+to_string(i)+": ";
            c.push_back(a[i]);
            sort(c.begin(),c.end());
            for(int x:c) s+=(to_string(x)+" ");
            b.push_back(s);
        }
        ford(i,n-1,0) cout << b[i] << "\n";
    }
}