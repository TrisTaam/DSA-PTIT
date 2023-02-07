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
int t,n,k,a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        deque<int> q;
        foru(i,1,n) cin >> a[i];
        foru(i,1,n){
            while(!q.empty()&&a[i]>=a[q.back()]) q.pop_back();
            q.push_back(i);
            if (q.front()+k<=i) q.pop_front();
            if (i>=k) cout << a[q.front()] << " ";
        }
        cout << "\n";
    }
}