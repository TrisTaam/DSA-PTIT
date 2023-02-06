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
int t,n,a[N][N];
bool c[N][N];
string s;
string s1="DLRU";
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
vector<string> b;

void tried(int x,int y){
    if (x==n-1&&y==n-1){
        b.push_back(s);
        return;
    }
    int u,v;
    foru(i,0,3){
        u=x+dx[i];
        v=y+dy[i];
        if (!c[u][v]){
            c[u][v]=true;
            s+=s1[i];
            if (u>=0&&u<n&&v>=0&&v<n&&a[u][v]) tried(u,v);
            c[u][v]=false;
            s.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1)
            foru(j,0,n-1){
                cin >> a[i][j];
                c[i][j]=false;
            }
        if (!a[0][0]) cout << -1;
        else{
            b.clear();
            s="";
            c[0][0]=true;
            tried(0,0);
            if (b.empty()) cout << -1;
            else
                for(string x:b) cout << x << " ";
        }
        cout << "\n";
    }
}