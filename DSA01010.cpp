#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=45;
int t,n,k,a[N],i,ans;
bool b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        fill(b,false);
        foru(i,1,k){
            cin >> a[i];
            b[a[i]]=true;
        }
        i=k;
        while(a[i]==n-k+i) i--;
        if (!i) cout << k;
        else{
            a[i]++;
            foru(j,i+1,k) a[j]=a[j-1]+1;
            ans=0;
            foru(i,1,k) ans+=(!b[a[i]]);
            cout << ans;
        }
        cout << "\n";
    }
}