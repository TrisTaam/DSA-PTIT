#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n,a[N][N],z;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        s=" "+s;
        fill(a,0);
        foru(i,1,n) a[i][i]=1;
        foru(i,2,n)
            foru(j,1,n-i+1){
                z=i+j-1;
                if (i==2&&s[j]==s[z]) a[j][z]=2;
                else if (s[j]==s[z]) a[j][z]=a[j+1][z-1]+2;
                else a[j][z]=max(a[j+1][z],a[j][z-1]);
            }
        cout << n-a[1][n] << "\n";
    }
}