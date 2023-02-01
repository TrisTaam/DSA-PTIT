#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,k,cnt;
string s;

void tried(int i){
    foru(j,0,1){
        s+=char(j+'0');
        cnt+=j;
        if (i==n){
            if (cnt==k) cout << s << "\n";
        }
        else tried(i+1);
        s.pop_back();
        cnt-=j;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        s="";
        cnt=0;
        tried(1);
    }
}