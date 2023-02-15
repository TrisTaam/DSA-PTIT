#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;

int res(int n){
    queue<ii> q;
    map<int,bool> a;
    q.push({n,0});
    a[n]=true;
    ii x;
    while(1){
        x=q.front();q.pop();
        if (x.fi==1) return x.se;
        for(int i=2;i*i<=x.fi;++i)
            if (x.fi%i==0)
                if (!a[x.fi/i]){
                    a[x.fi/i]=true;
                    q.push({x.fi/i,x.se+1});
                }
        if (!a[x.fi-1]){
            a[x.fi-1]=true;
            q.push({x.fi-1,x.se+1});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cout << res(n) << "\n";
    }
}