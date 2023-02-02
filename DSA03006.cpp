#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=55;
int t,n;
ii a[N];

bool res(){
    foru(i,0,n/2-1)
        if (a[i].se+a[n-i-1].se!=n-1) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1){
            cin >> a[i].fi;
            a[i].se=i;
        }
        sort(a,a+n);
        cout << (res()?"Yes":"No") << "\n";
    }
}