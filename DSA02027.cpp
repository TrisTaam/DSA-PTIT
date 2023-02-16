#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=20;
int t,n,a[N][N],s,ans;
bool b[N];

void tried(int i,int j){
    if (s>=ans) return;
    foru(z,2,n)
        if (!b[z]){
            b[z]=true;
            s+=a[j][z];
            if (i==n) ans=min(ans,s+a[z][1]);
            else tried(i+1,z);
            b[z]=false;
            s-=a[j][z];
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,1,n)
            foru(j,1,n) cin >> a[i][j];
        fill(b,false);
        b[1]=true;
        s=0;
        ans=INT_MAX;
        tried(2,1);
        cout << ans << "\n";
    }
}