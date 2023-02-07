#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,n,a;
vector<int> b,c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        b.clear();
        c.clear();
        foru(i,1,n){
            cin >> a;
            if (i&1) b.push_back(a);
            else c.push_back(a);
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end(),greater<int>());
        for(int i=0,j=0;i<b.size()||j<c.size();++i,++j){
            if (i<b.size()) cout << b[i] << " ";
            if (j<c.size()) cout << c[j] << " ";
        }
    }
}