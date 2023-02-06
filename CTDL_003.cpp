#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n,s,a[N],b[N],c[N],d[N],s1,s2,ans;

void check(){
    if (ans<s1){
        ans=s1;
        foru(i,0,n-1) d[i]=c[i];
    }
}

void tried(int i){
    foru(j,i,n-1){
        s1+=a[j];
        s2+=b[j];
        c[j]=1;
        if (s2==s) check();
        else if (s2<s) tried(j+1);
        s1-=a[j];
        s2-=b[j];
        c[j]=0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> s;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-1) cin >> b[i];
        ans=INT_MIN;
        s1=s2=0;
        tried(0);
        cout << ans << "\n";
        foru(i,0,n-1) cout << d[i] << " ";
    }
}