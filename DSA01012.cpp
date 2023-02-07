#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=2000;
int t,n,k;
string a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        a[0]="0";
        a[1]="1";
        k=2;
        foru(i,2,n){
            foru(j,0,k-1){
                a[k*2-j-1]="1"+a[j];
                a[j]="0"+a[j];
            }
            k*=2;
        }
        foru(i,0,k-1) cout << a[i] << " ";
        cout << "\n";
    }
}