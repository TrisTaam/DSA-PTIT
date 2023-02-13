#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a,b;

int res(int a,int b){
    queue<ii> q;
    map<int,bool> c;
    q.push({a,0});
    ii x;
    c[a]=true;
    while(1){
        x=q.front();q.pop();
        if (x.fi==b) return x.se;
        if (x.fi<b&&!c[x.fi*2]){
            q.push({x.fi*2,x.se+1});
            c[x.fi*2]=true;
        }
        if (x.fi-1>0&&!c[x.fi-1]){
            q.push({x.fi-1,x.se+1});
            c[x.fi-1]=true;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << res(a,b) << "\n";
    }
}