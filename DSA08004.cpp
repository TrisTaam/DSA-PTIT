#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,k,a[256],b;
ll ans;
string s;
priority_queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> k >> s;
        fill(a,0);
        for(char x:s) a[x]++;
        foru(i,0,255)
            if (a[i]) q.push(a[i]);
        while(!q.empty()&&k){
            b=q.top();q.pop();
            b--;
            if (b) q.push(b);
            k--;
        }
        ans=0;
        while(!q.empty()){
            b=q.top();q.pop();
            ans+=(ll)b*b;
        }
        cout << ans << "\n";
    }
}