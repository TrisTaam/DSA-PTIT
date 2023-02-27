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
int t,n;
char a[N][N];
ii s,e;

int bfs(ii s,ii e){
    queue<pair<ii,int>> q;
    q.push({s,0});
    a[s.fi][s.se]='X';
    pair<ii,int> x;
    while(!q.empty()){
        x=q.front();q.pop();
        if (x.fi.fi==e.fi&&x.fi.se==e.se) return x.se;
        ford(i,x.fi.fi-1,0)
            if (a[i][x.fi.se]=='X') break;
            else{
                q.push({{i,x.fi.se},x.se+1});
                a[i][x.fi.se]='X';
            }
        foru(i,x.fi.fi+1,n-1)
            if (a[i][x.fi.se]=='X') break;
                else{
                    q.push({{i,x.fi.se},x.se+1});
                    a[i][x.fi.se]='X';
                }
        ford(i,x.fi.se-1,0)
            if (a[x.fi.fi][i]=='X') break;
            else{
                q.push({{x.fi.fi,i},x.se+1});
                a[x.fi.fi][i]='X';
            }
        foru(i,x.fi.se+1,n-1)
            if (a[x.fi.fi][i]=='X') break;
            else{
                q.push({{x.fi.fi,i},x.se+1});
                a[x.fi.fi][i]='X';
            }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1)
            foru(j,0,n-1) cin >> a[i][j];
        cin >> s.fi >> s.se >> e.fi >> e.se;
        cout << bfs(s,e) << "\n";
    }
}