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
int t,n,in[N],pre[N],post[N],cnt1,cnt2;

int find(int l,int r,int x){
    foru(i,0,n-1)
        if (in[i]==x) return i;
    return -1;
}

void res(int l,int r){
    if (l>r) return;
    int m=find(l,r,pre[cnt1++]);
    res(l,m-1);
    res(m+1,r);
    post[cnt2++]=in[m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> in[i];
        foru(i,0,n-1) cin >> pre[i];
        cnt1=cnt2=0;
        res(0,n-1);
        foru(i,0,n-1) cout << post[i] << " ";
        cout << "\n";
    }
}