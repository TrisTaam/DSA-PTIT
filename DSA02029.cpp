#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;

void tried(int n,char a,char b,char c){
    if (n==1){
        cout << a << " -> " << c << "\n";
        return;
    }
    tried(n-1,a,c,b);
    tried(1,a,b,c);
    tried(n-1,b,a,c);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        tried(n,'A','B','C');
    }
}