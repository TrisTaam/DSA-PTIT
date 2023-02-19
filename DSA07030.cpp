#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=505;
int t,n,m,x,a[N][N],l[N],r[N],ans;
stack<int> s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        ans=0;
        foru(i,1,n){
            foru(j,1,m){
                cin >> a[i][j];
                if (a[i][j]) a[i][j]+=a[i-1][j];
            }
            s=stack<int>{};
            foru(j,1,m){
                while(!s.empty()&&a[i][j]<=a[i][s.top()]) s.pop();
                if (s.empty()) l[j]=0;
                else l[j]=s.top()+1;
                s.push(j);
            }
            s=stack<int>{};
            ford(j,m,1){
                while(!s.empty()&&a[i][j]<=a[i][s.top()]) s.pop();
                if (s.empty()) r[j]=m;
                else r[j]=s.top()-1;
                s.push(j);
            }
            foru(j,1,m) ans=max(ans,a[i][j]*(r[j]-l[j]+1));
        }
        cout << ans << "\n";
    }
}