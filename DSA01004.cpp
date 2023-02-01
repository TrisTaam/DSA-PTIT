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

void print(){
    foru(i,1,k) cout << a[i];
    cout << " ";
}

void tried(int i,int j){
    foru(z,j,n){
        a[i]=z;
        if (i==k) print();
        else tried(i+1,z+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        tried(1,1);
        cout << "\n";
    }
}