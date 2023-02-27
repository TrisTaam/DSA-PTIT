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
        fill(a,0);
        foru(i,0,n1)
            foru(j,0,n2)
                if (!i) a[i][j]=j;
                else if (!j) a[i][j]=i;
                else if (s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1];
                else a[i][j]=min(a[i][j-1],min(a[i-1][j],a[i-1][j-1]))+1;
        cout << a[n1][n2] << "\n";
    }
}