#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n,x,y,b[N];
vector<int> a[N];

void bfs(int s){
    queue<int> q;
    bool vst[N]={0};
    q.push(s);
    vst[s]=true;
    b[s]=s;
    int x;
    while(!q.empty()){
        x=q.front();q.pop();
        for(int y:a[x])
            if (!vst[y]){
                b[y]=x;
                vst[y]=true;
                q.push(y);
            }
    }
}

void findPath(int x){
    stack<int> c;
    while(1){
        c.push(x);
        if (x==b[x]) break;
        x=b[x];
    }
    while(!c.empty()){
        cout << c.top() << " ";
        c.pop();
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) a[i].clear();
        foru(i,1,n-1){
            cin >> x >> y;
            a[x].push_back(y);
        }
        bfs(1);
        foru(i,1,n)
            if (a[i].empty()) findPath(i);
    }
}