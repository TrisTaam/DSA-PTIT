#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct point{
    double x,y;
};

struct edge{
    int u,v;
    double w;
};

const int N=105;

int t,n,par[N],sz[N];
point a[N];
vector<edge> b,c;
double ans;

double dis(point a,point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

bool cmp(edge a,edge b){
    return a.w<b.w;
}

int findDsu(int a){
    if (a==par[a]) return a;
    return par[a]=findDsu(par[a]);
}

bool unionDsu(int a,int b){
    a=findDsu(a);
    b=findDsu(b);
    if (a==b) return false;
    if (sz[a]<sz[b]) swap(a,b);
    par[b]=a;
    sz[a]+=sz[b];
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cout << setprecision(6) << fixed;
    while(t--){
        cin >> n;
        foru(i,1,n){
            cin >> a[i].x >> a[i].y;
            par[i]=i;
            sz[i]=1;
        }
        b.clear();
        foru(i,1,n-1)
            foru(j,i+1,n) b.push_back({i,j,dis(a[i],a[j])});
        sort(b.begin(),b.end(),cmp);
        ans=0;
        c.clear();
        for(edge x:b){
            if (c.size()==n-1) break;
            if (unionDsu(x.u,x.v)){
                b.push_back(x);
                ans+=x.w;
            }
        }
        cout << ans << "\n";
    }
}