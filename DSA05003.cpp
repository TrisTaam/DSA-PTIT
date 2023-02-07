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
int t,n1,n2,n3,a[N][N][N];
string s1,s2,s3;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n1 >> n2 >> n3;
        cin >> s1 >> s2 >> s3;
        s1=" "+s1;
        s2=" "+s2;
        s3=" "+s3;
        foru(i,0,n1)
            foru(j,0,n2)
                foru(z,0,n3) a[i][j][z]=0;
        foru(i,1,n1)
            foru(j,1,n2)
                foru(z,1,n3)
                    if (s1[i]==s2[j]&&s1[i]==s3[z]) a[i][j][z]=a[i-1][j-1][z-1]+1;
                    else a[i][j][z]=max(a[i-1][j][z],max(a[i][j-1][z],a[i][j][z-1]));
        cout << a[n1][n2][n3] << "\n";
    }
}