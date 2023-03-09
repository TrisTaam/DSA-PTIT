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
int t,n,m,x,y,color[N];
vector<int> a[N];

bool bfs(int s){
    queue<int> q;
    q.push(s);
    color[s]=1;
    int x;
    while(!q.empty()){
        x=q.front();q.pop();
        for(int y:a[x])
            if (!color[y]){
                q.push(y);
                color[y]=(color[x]==1?2:1);
            }
            else if (color[y]==color[x]) return false;
    }
    return true;
}

bool res(){
    fill(color,0);
    foru(i,1,n)
        if (!color[i])
            if (!bfs(i)) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n) a[i].clear();
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cout << (res()?"YES":"NO") << "\n";
    }
}