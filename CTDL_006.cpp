#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n,a[N];
map<int,bool> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,0,n-1){
            cin >> a[i];
            b[a[i]]=true;
        }
        foru(i,0,n-1)
            if (b[a[i]]){
                cout << a[i] << " ";
                b[a[i]]=false;
            }
    }
}