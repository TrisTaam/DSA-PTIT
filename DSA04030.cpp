#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct mtx{
    ll x[4][4]={1,1,1,1,
                0,1,1,1,
                0,1,0,0,
                0,0,1,0};
};

const ll du=1e15+7;
int t;
ll n;
mtx base;

ll multi(ll a,ll b){
    if (!b) return 0;
    ll c=multi(a,b/2);
    c=(c*2)%du;
    if (b&1) return (c+a)%du;
    return c;
}

mtx operator*(mtx a,mtx b){
    mtx c;
    foru(i,0,3)
        foru(j,0,3){
            c.x[i][j]=0;
            foru(z,0,3) c.x[i][j]=(c.x[i][j]+multi(a.x[i][z],b.x[z][j]))%du;
        }
    return c;
}

mtx operator^(mtx a,ll b){
    if (!b) return base;
    mtx c=a^(b/2);
    c=c*c;
    if (b&1) return c*a;
    return c;
}

mtx reverse(mtx a){
    return a^(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    foru(i,0,3)
        foru(j,0,3) base.x[i][j]=(i==j);
    mtx a;
    cin >> t;
    while(t--){
        cin >> n;
        mtx a;
        a=a^n;
        cout << a.x[0][2] << "\n";
    }
}