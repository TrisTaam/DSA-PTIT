#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int t,n,m,x,y,ans;;
vector<int> a[N];
bool b[N][N];

void tried(int i,int j){
    ans=max(ans,j);
    for(int z:a[i])
        if (!b[z][i]){
            b[z][i]=b[i][z]=true;
            tried(z,j+1);
            b[z][i]=b[i][z]=false;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1) a[i].clear();
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        ans=INT_MIN;
        fill(b,false);
        foru(i,0,n-1) tried(i,0);
        cout << ans << "\n";
    }
}