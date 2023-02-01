#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,a[N];
string s,s1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        s="";
        while(n){
            s1="["+to_string(a[0]);
            foru(j,1,n-1) s1+=(" "+to_string(a[j]));
            s1+="]";
            foru(j,0,n-2) a[j]+=a[j+1];
            n--;
            s=s1+" "+s;
        }
        cout << s << "\n";
    }
}