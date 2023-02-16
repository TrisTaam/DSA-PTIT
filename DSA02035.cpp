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
const int K=15;
int t,n,k,b[K],ans;
string a[N],s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> k;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,k-1) b[i]=i;
        ans=INT_MAX;
        do{
            foru(i,0,n-1){
                s="";
                foru(j,0,k-1) s+=a[i][b[j]];
                a[i]=s;
            }
            sort(a,a+n);
            ans=min(ans,stoi(a[n-1])-stoi(a[0]));
        }while(next_permutation(b,b+k));
        cout << ans << "\n";
    }
}