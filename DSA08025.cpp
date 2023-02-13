#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a,b,c,d;
string s;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};

int res(int a,int b,int c,int d){
    queue<pair<ii,int>> q;
    int e[9][9]={0};
    pair<ii,int> x;
    q.push({{a,b},0});
    e[a][b]=true;
    int u,v;
    while(1){
        x=q.front();q.pop();
        if (x.fi.fi==c&&x.fi.se==d) return x.se;
        foru(i,0,7){
            u=x.fi.fi+dx[i];
            v=x.fi.se+dy[i];
            if (u>=1&&v>=1&&u<=8&&v<=8&&!e[u][v]){
                q.push({{u,v},x.se+1});
                e[u][v]=true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        a=s[0]-'a'+1;
        b=s[1]-'0';
        cin >> s;
        c=s[0]-'a'+1;
        d=s[1]-'0';
        cout << res(a,b,c,d) << "\n";
    }
}