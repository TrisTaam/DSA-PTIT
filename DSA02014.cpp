#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=5;
int t,k,n,m;
string a,s;
map<string,bool> e;
char b[N][N];
int dx[8]={-1,0,0,1,-1,-1,1,1};
int dy[8]={0,-1,1,0,-1,1,-1,1};
bool c[N][N],kt;

void tried(int i,int j){
    if (e[s]){
        cout << s << " ";
        kt=true;
    }
    int u,v;
    foru(z,0,7){
        u=i+dx[z];
        v=j+dy[z];
        if (u>=0&&u<n&&v>=0&&v<m&&!c[u][v]){
            s+=b[u][v];
            c[u][v]=true;
            tried(u,v);
            s.pop_back();
            c[u][v]=false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> k >> n >> m;
        e.clear();
        foru(i,0,k-1){
            cin >> a;
            e[a]=true;
        }
        foru(i,0,n-1)
            foru(j,0,m-1) cin >> b[i][j];
        kt=false;
        foru(i,0,n-1){
            foru(j,0,m-1){
                c[i][j]=true;
                s=string(1,b[i][j]);
                tried(i,j);
                c[i][j]=false;
            }
        }
        if (!kt) cout << -1;
        cout << "\n";
    }
}