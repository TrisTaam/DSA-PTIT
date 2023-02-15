#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=35;
int t,n,s,a[N],ans;

void tried(int i,int j){
    foru(z,j,n-1){
        s-=a[z];
        if (!s){
            ans=i;
            return;
        }
        else if (s>0) tried(i+1,z+1);
        if (ans>-1) return;
        s+=a[z];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n,greater<int>());
        ans=-1;
        tried(1,0);
        cout << ans << "\n";
    }
}