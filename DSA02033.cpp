#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,a[N];
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) a[i]=i+1;
        do{
            kt=true;
            foru(i,0,n-2)
                if (abs(a[i]-a[i+1])==1){
                    kt=false;
                    break;
                }
            if (kt){
                foru(i,0,n-1) cout << a[i];
                cout << "\n";
            }
        }while(next_permutation(a,a+n));
        cout << "\n";
    }
}