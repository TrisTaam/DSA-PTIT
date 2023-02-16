#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
ll a[6];
bool kt;

void tried(int i,ll x){
    if (i==6&&x==23){
        kt=true;
        return;
    }
    if (kt) return;
    if (i<6) tried(i+1,x+a[i]);
    if (i<6) tried(i+1,x-a[i]);
    if (i<6) tried(i+1,x*a[i]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        foru(i,1,5) cin >> a[i];
        kt=false;
        sort(a+1,a+6);
        do{
            tried(2,a[1]);
            if (kt) break;
        }while(next_permutation(a+1,a+6));
        cout << (kt?"YES":"NO") << "\n";
    }
}