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
int t,n,s,a[N][N];
vector<int> b;
vector<vector<int>> c;
bool d[N];

void tried(int i){
    foru(j,1,n)
        if (!d[j]){
            s-=a[i][j];
            b.push_back(j);
            d[j]=true;
            if (i==n){
                if (!s) c.push_back(b);
            }
            else if (s>0) tried(i+1);
            s+=a[i][j];
            b.pop_back();
            d[j]=false;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> s;
        foru(i,1,n)
            foru(j,1,n) cin >> a[i][j];
        tried(1);
        cout << c.size() << "\n";
        for(auto x:c){
            for(int y:x) cout << y << " ";
            cout << "\n";
        }
    }
}