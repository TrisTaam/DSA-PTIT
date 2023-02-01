#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
const int A=105;
int t,n,k,a[N];
bool kt;
vector<int> b;

void print(){
    cout << "[" << b[0];
    foru(i,1,b.size()-1) cout << " " << b[i];
    cout << "] ";
}

void tried(int i,int j){
    foru(z,j,n-1){
        k-=a[z];
        b.push_back(a[z]);
        if (!k){
            kt=true;
            print();
        }
        else if (k>0) tried(i+1,z+1);
        k+=a[z];
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
        kt=false;
        tried(1,0);
        if (!kt) cout << -1;
        cout << "\n";
    }
}