#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
const int du=1e9+7;

struct mtx{
    ll x[2][2]={0,1,
                1,1};
};

int t,n;

mtx operator*(mtx a,mtx b){
    mtx c;
    foru(i,0,1)
        foru(j,0,1){
            c.x[i][j]=0;
            foru(z,0,1) c.x[i][j]=(c.x[i][j]+(a.x[i][z]*b.x[z][j])%du)%du;
        }
    return c;
}

mtx pow(mtx a,int b){
    if (b==1) return a;
    if (b&1) return pow(a,b-1)*a;
    mtx c=pow(a,b/2);
    return c*c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        mtx a;
        a=pow(a,n);
        cout << a.x[0][1] << "\n";
    }
}