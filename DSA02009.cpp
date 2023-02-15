#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int t,n,k,a[N],s,s1;
bool kt;

void tried(int i,int j){
    if (kt) return;
    if (i==k){
        kt=true;
        return;
    }
    foru(z,0,n-1)
        if (j==s) tried(i+1,0);
        else if (j<s) tried(i,j+a[z]);
        else return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        s=0;
        foru(i,0,n-1){
            cin >> a[i];
            s+=a[i];
        }
        if (s%k) cout << 0;
        else{
            s/=k;
            kt=false;
            tried(1,0);
            cout << (kt?1:0);
        }
        cout << "\n";
    }
}