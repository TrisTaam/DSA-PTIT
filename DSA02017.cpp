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
int t,a[N][N],s,ans;
bool cot[2*N],cheochinh[2*N],cheophu[2*N];

void tried(int i){
    foru(j,1,8)
        if (!cot[j]&&!cheochinh[i-j+8]&&!cheophu[i+j]){
            cot[j]=cheochinh[i-j+8]=cheophu[i+j]=true;
            s+=a[i][j];
            if (i==8) ans=max(ans,s);
            else tried(i+1);
            cot[j]=cheochinh[i-j+8]=cheophu[i+j]=false;
            s-=a[i][j];
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        foru(i,1,8)
            foru(j,1,8) cin >> a[i][j];
        fill(cot,0);
        fill(cheochinh,0);
        fill(cheophu,0);
        ans=s=0;
        tried(1);
        cout << ans << "\n";
    }
}