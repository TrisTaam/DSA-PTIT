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
int t,n,a[N],b[N],c[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        stack<int> s;
        ford(i,n-1,0){
            while(!s.empty()&&a[i]>=a[s.top()]) s.pop();
            if (s.empty()) b[i]=-1;
            else b[i]=s.top();
            s.push(i);
        }
        s=stack<int>{};
        ford(i,n-1,0){
            while(!s.empty()&&a[i]<=a[s.top()]) s.pop();
            if (s.empty()) c[i]=-1;
            else c[i]=s.top();
            s.push(i);
        }
        foru(i,0,n-1) cout << (b[i]==-1||c[b[i]]==-1?-1:a[c[b[i]]]) << " ";
        cout << "\n";
    }
}