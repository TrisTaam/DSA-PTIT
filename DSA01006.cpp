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
int t,n,a[N];
bool b[N];

void print(){
    foru(i,1,n) cout << a[i];
    cout << " ";
}

void tried(int i){
    ford(j,n,1)
        if (!b[j]){
            b[j]=true;
            a[i]=j;
            if (i==n) print();
            else tried(i+1);
            b[j]=false;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(b,false);
        tried(1);
        cout << "\n";
    }
}