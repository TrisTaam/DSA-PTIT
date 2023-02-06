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
int t,n,x;
vector<int> a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,1,n)
            foru(j,1,n){
                cin >> x;
                if (i>j&&x){
                    a[i].push_back(j);
                    a[j].push_back(i);
                }
            }
        foru(i,1,n){
            for(int x:a[i]) cout << x << " ";
            cout << "\n";
        }
    }
}