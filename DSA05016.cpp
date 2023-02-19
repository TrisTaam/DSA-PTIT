#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e4+5;
int t,n,cnt,x;
ll a[N];
map<ll,bool> b;
priority_queue<ll,vector<ll>,greater<ll>> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cnt=0;
    q.push(1);
    b[1]=true;
    while(cnt<1e4){
        x=q.top();q.pop();
        a[++cnt]=x;
        if (!b[x*2]){
            q.push(x*2);
            b[x*2]=true;
        }
        if (!b[x*3]){
            q.push(x*3);
            b[x*3]=true;
        }
        if (!b[x*5]){
            q.push(x*5);
            b[x*5]=true;
        }
    }
    cin >> t;
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}