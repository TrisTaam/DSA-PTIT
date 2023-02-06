#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=20;
int t,n,k,a[N];
vector<int> b;

bool nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return n>1;
}

void print(){
    for(int x:b) cout << x << " ";
    cout << "\n";
}

void tried(int i){
    foru(j,i,n-1){
        b.push_back(a[j]);
        if (b.size()==k) print();
        else tried(j+1);
        b.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        b.clear();
        tried(0);
    }
}