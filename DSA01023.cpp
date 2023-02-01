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
int t,n,k,a[N],b[N],i,cnt;

bool check(){
    foru(i,1,n)
        if (a[i]!=b[i]) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,1,k){
            cin >> a[i];
            b[i]=i;
        }
        cnt=0;
        while(++cnt){
            if (check()) break;
            i=k;
            while(b[i]==n-k+i) i--;
            b[i]++;
            foru(j,i+1,k) b[j]=b[j-1]+1;
        }
        cout << cnt << "\n";
    }
}