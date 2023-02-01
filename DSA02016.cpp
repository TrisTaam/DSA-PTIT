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
int t,n,ans;
bool cot[2*N],cheochinh[2*N],cheophu[2*N];

void tried(int i){
    foru(j,1,n)
        if (!cot[j]&&!cheochinh[i-j+n]&&!cheophu[i+j]){
            cot[j]=cheochinh[i-j+n]=cheophu[i+j]=true;
            if (i==n) ans++;
            else tried(i+1);
            cot[j]=cheochinh[i-j+n]=cheophu[i+j]=false;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(cot,0);
        fill(cheochinh,0);
        fill(cheophu,0);
        ans=0;
        tried(1);
        cout << ans << "\n";
    }
}