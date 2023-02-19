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
int t,n,m,x,y,ans;
char a[N][N];
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};

void dfs(int i,int j){
    a[i][j]='.';
    foru(z,0,7){
        x=i+dx[z];
        y=j+dy[z];
        if (x>=0&&x<n&&y>=0&&y<m&&a[x][y]=='W') dfs(x,y);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1)
            foru(j,0,m-1) cin >> a[i][j];
        ans=0;
        foru(i,0,n-1)
            foru(j,0,n-1){
                if (a[i][j]=='W'){
                    ans++;
                    dfs(i,j);
                }
            }
        cout << ans;
    }
}