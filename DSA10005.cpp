#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
int t,n,m,x,y,ra[N],vao[N];
vector<int> a[N];

bool res(){
    foru(i,1,n)
        if (ra[i]!=vao[i]) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n) a[i].clear();
        fill(ra,0);
        fill(vao,0);
        while(m--){
            cin >> x >> y;
            a[x].push_back(y);
            ra[x]++;
            vao[y]++;
        }
        cout << (res()?1:0) << "\n";
    }
}