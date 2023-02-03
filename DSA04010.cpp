#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a,s1,s2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        s1=s2=0;
        while(n--){
            cin >> a;
            s2+=a;
            s1=max(s1,s2);
            if (s2<0) s2=0;
        }
        cout << s1 << "\n";
    }
}