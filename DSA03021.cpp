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
int n,a[N],mina,ans;

bool res(int x){
    foru(i,0,n-1)
        if (a[i]/x==a[i]/(x+1)) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    mina=INT_MAX;
    foru(i,0,n-1){
        cin >> a[i];
        mina=min(mina,a[i]);
    }
    ans=0;
    ford(i,mina,1)
        if (res(i)){
            foru(j,0,n-1) ans+=(a[j]/(i+1)+1);
            break;
        }
    cout << ans;
}