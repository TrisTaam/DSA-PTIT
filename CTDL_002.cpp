#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=55;
int n,k,a[N],ans;
bool b[N];

bool check(){
    int s=0;
    foru(i,0,n-1) s+=a[i]*b[i];
    return s==k;
}

void print(){
    foru(i,0,n-1)
        if (b[i]) cout << a[i] << " ";
    cout << "\n";
}

void tried(int i){
    foru(j,0,1){
        b[i-1]=j;
        if (i==n){
            if (check()){
                ans++;
                print();
            }
        }
        else tried(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    foru(i,0,n-1) cin >> a[i];
    tried(1);
    cout << ans;
}