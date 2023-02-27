#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=35;
struct point{
    int x,y,z;
};

int t,n1,n2,n3;
char a[N][N][N];
point s,e;
int dx[6]={-1,1,0,0,0,0};
int dy[6]={0,0,-1,1,0,0};
int dz[6]={0,0,0,0,-1,1};

bool equal(point a,point b){
    return a.x==b.x&&a.y==b.y&&a.z==b.z;
}

int bfs(point s,point e){
    queue<pair<point,int>> q;
    q.push({s,0});
    a[s.x][s.y][s.z]='#';
    pair<point,int> c;
    point d;
    while(!q.empty()){
        c=q.front();q.pop();
        if (equal(c.fi,e)) return c.se;
        foru(i,0,5){
            d.x=c.fi.x+dx[i];
            d.y=c.fi.y+dy[i];
            d.z=c.fi.z+dz[i];
            if (d.x>=1&&d.x<=n1&&d.y>=1&&d.y<=n2&&d.z>=1&&d.z<=n3&&a[d.x][d.y][d.z]=='.'){
                q.push({d,c.se+1});
                a[d.x][d.y][d.z]='#';
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n1 >> n2 >> n3;
        foru(i,1,n1)
            foru(j,1,n2)
                foru(z,1,n3){
                    cin >> a[i][j][z];
                    if (a[i][j][z]=='S'){
                        a[i][j][z]='.';
                        s.x=i;
                        s.y=j;
                        s.z=z;
                    }
                    else if (a[i][j][z]=='E'){
                        a[i][j][z]='.';
                        e.x=i;
                        e.y=j;
                        e.z=z;
                    }
                }
        cout << bfs(s,e) << "\n";
    }
}