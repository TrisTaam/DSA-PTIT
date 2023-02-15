#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int A=1e4+5;
int t,n,m;
vector<int> a,b[A];
bool f[A];

void sieve(){
    fill(f,true);
    f[0]=f[1]=true;
    for(int i=2;i*i<=10000;++i)
        if (f[i])
            for(int j=i*i;j<=10000;j+=i) f[j]=false;
    foru(i,1000,9999)
        if (f[i]) a.push_back(i);
}

bool check(int n1,int n2){
    string s1=to_string(n1);
    string s2=to_string(n2);
    int cnt=0;
    foru(i,0,s1.size()-1){
        cnt+=(s1[i]!=s2[i]);
        if (cnt==2) return false;
    }
    return cnt==1;
}

int bfs(int n,int m){
    queue<ii> q;
    bool c[A]={0};
    q.push({n,0});
    c[n]=true;
    ii x;
    while(1){
        x=q.front();q.pop();
        if (x.fi==m) return x.se;
        for(int y:b[x.fi])
            if (!c[y]){
                c[y]=true;
                q.push({y,x.se+1});
            }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    foru(i,0,a.size()-2)
        foru(j,i+1,a.size()-1)
            if (check(a[i],a[j])){
                b[a[i]].push_back(a[j]);
                b[a[j]].push_back(a[i]);
            }
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << bfs(n,m) << "\n";
    }
}