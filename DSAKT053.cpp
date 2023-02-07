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
int t,n1,n2,a[N][N];
string s1,s2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        n1=s1.size();
        n2=s2.size();
        s1=" "+s1;
        s2=" "+s2;
        foru(i,0,n1)
            foru(j,0,n2) a[i][j]=0;
        foru(i,1,n1)
            foru(j,1,n2)
                if (s1[i]==s2[j]) a[i][j]=a[i-1][j-1]+1;
                else a[i][j]=max(a[i-1][j],a[i][j-1]);
        cout << a[n1][n2] << "\n";
    }
}