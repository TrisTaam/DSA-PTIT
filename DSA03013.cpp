#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,d,a[256],maxa;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> d;
        cin >> s;
        fill(a,0);
        maxa=0;
        for(char x:s){
            a[x]++;
            maxa=max(maxa,a[x]);
        }
        cout << (maxa>(s.size()+1)/d?-1:1) << "\n";
    }
}