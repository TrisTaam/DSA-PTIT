#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,ans;

int bfs(int n){
    queue<ii> q;
    q.push({n,0});
    ii x;
    while(1){
        x=q.front();q.pop();
        if (x.fi==1) return x.se;
        if (x.fi%3==0) q.push({x.fi/3,x.se+1});
        if (x.fi%2==0) q.push({x.fi/2,x.se+1});
        q.push({x.fi-1,x.se+1});
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cout << bfs(n) << "\n";
    }
}