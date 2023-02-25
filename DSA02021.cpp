#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,i,sz;
string s;
ll n,a[100];

char res(ll n){
    if (n<=sz) return s[n-1];
    int i=0;
    while(n>=a[i]) i++;
    i--;
    n-=a[i];
    if (!n) return res(a[i-1]-1);
    if (n==1) return res(a[i]);
    return res(n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s >> n;
        sz=s.size();
        a[0]=sz;
        i=0;
        while(a[i]<=n){
            ++i;
            a[i]=a[i-1]*2;
        }
        cout << res(n) << "\n";
    }
}