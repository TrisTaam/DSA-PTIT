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
int t,n,a[N];
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        kt=false;
        ford(i,n-2,0)
            if (a[i]<a[i+1]){
                ford(j,n-1,i)
                    if (a[i]>=a[j]){
                        swap(a[i],a[j+1]);
                        sort(a+i+1,a+n);
                        break;
                    }
                kt=true;
                break;
            }
        if (!kt)
            foru(i,0,n-1) a[i]=i+1;
        foru(i,0,n-1) cout << a[i] << " ";
        cout << "\n";
    }
}