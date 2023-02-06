#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int n,k,s,a[N],ans;

void tried(int i,int j){
    foru(z,j,n){
        s-=a[z];
        if (i==k){
            if (!s) ans++;
        }
        else if (s>0) tried(i+1,z+1);
        s+=a[z];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    foru(i,1,20) a[i]=i;
    while(cin >> n >> k >> s){
        if (!n&&!k&&!s) break;
        ans=0;
        tried(1,1);
        cout << ans << "\n";
    }
}