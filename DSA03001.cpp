#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,ans;
int a[10]={1,2,5,10,20,50,100,200,500,1000};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ans=0;
        ford(i,9,0){
            ans+=n/a[i];
            n%=a[i];
        }
        cout << ans << "\n";
    }
}