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
int t,n,a[N],b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i];
        stack<int> st;
        ford(i,n,1){
            while(!st.empty()&&st.top()<=a[i]) st.pop();
            if (st.empty()) b[i]=-1;
            else b[i]=st.top();
            st.push(a[i]);
        }
        foru(i,1,n) cout << b[i] << " ";
        cout << "\n";
    }
}