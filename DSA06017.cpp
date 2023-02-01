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
int t,n,m,a[N],b[N],i,j;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,m-1) cin >> b[i];
        sort(a,a+n);
        sort(b,b+m);
        i=j=0;
        while(i<n&&j<m){
            if (a[i]<b[j]){
                cout << a[i] << " ";
                i++;
            }
            else{
                cout << b[j] << " ";
                j++;
            }
        }
        foru(z,i,n-1) cout << a[z] << " ";
        foru(z,j,m-1) cout << b[z] << " ";
        cout << "\n";
    }
}