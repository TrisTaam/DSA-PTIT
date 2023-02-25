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
int t,n,z,ans;
bool a[N][N];
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        s=" "+s;
        fill(a,false);
        ans=1;
        foru(i,1,n) a[i][i]=true;
        foru(i,2,n)
            foru(j,1,n-i+1){
                z=j+i-1;
                if (j+1==z&&s[j]==s[z]) a[j][z]=true;
                else a[j][z]=(a[j+1][z-1]&&s[j]==s[z]);
                if (a[j][z]) ans=max(ans,i);
            }
        cout << ans << "\n";
    }
}