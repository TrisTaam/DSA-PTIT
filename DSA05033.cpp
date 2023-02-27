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
int t,n,a[N][N];
string s1,s2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1;
        n=s1.size();
        s2="";
        for(char x:s1) s2=x+s2;
        s1=" "+s1;
        s2=" "+s2;
        fill(a,0);
        foru(i,1,n)
            foru(j,1,n)
                if (s1[i]==s2[j]) a[i][j]=a[i-1][j-1]+1;
                else a[i][j]=max(a[i-1][j],a[i][j-1]);
        cout << n-a[n][n] << "\n";
    }
}