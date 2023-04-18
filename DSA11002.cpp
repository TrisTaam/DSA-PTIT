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
int t,n;
string a[N];

ll res(int i){
    if (a[i]=="+") return res(i*2)+res(i*2+1);
    if (a[i]=="-") return res(i*2)-res(i*2+1);
    if (a[i]=="*") return res(i*2)*res(i*2+1);
    if (a[i]=="/") return res(i*2)/res(i*2+1);
    return stoll(a[i]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i];
        cout << res(1) << "\n";
    }
}