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
int t,n1,n2,n3,a[N],b[N],c[N],i,j,z;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n1 >> n2 >> n3;
        foru(i,0,n1-1) cin >> a[i];
        foru(i,0,n2-1) cin >> b[i];
        foru(i,0,n3-1) cin >> c[i];
        i=j=z=0;
        kt=false;
        while(i<n1&&j<n2&&z<n3)
            if (a[i]==b[j]&&a[i]==c[z]){
                cout << a[i] << " ";
                kt=true;
                i++;
                j++;
                z++;
            }
            else if (a[i]<b[j]) i++;
            else if (b[j]<c[z]) j++;
            else z++;
        if (!kt) cout << -1;
        cout << "\n";
    }
}