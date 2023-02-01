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
int t,n,k,a[N],i;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,1,k) cin >> a[i];
        i=k;
        while(a[i]==n-k+i) i--;
        if (!i)
            foru(i,1,k) a[i]=i;
        else{
            a[i]++;
            foru(j,i+1,k) a[j]=a[j-1]+1;
        }
        foru(i,1,k) cout << a[i] << " ";
        cout << "\n";
    }
}