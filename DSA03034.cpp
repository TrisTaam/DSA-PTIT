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
int t,n,m,k,a[N],b[N],c[N],i,j,z;
vector<int> d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,m-1) cin >> b[i];
        foru(i,0,k-1) cin >> c[i];
        d.clear();
        i=j=z=0;
        while(i<n&&j<m&&z<k){
            if (a[i]==b[j]&&a[i]==c[z]){
                d.push_back(a[i]);
                i++;
                j++;
                z++;
            }
            else if (a[i]<b[j]) i++;
            else if (b[j]<c[z]) j++;
            else z++;
        }
        if (d.empty()) cout << "NO";
        else
            for(int x:d) cout << x << " ";
        cout << "\n";
    }
}