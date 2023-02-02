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
int t,n,a[N],val,pos;

void print(){
    foru(i,0,n-1) cout << a[i] << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-2){
            cout << "Buoc " << i+1 << ": ";
            pos=i;
            foru(j,i+1,n-1)
                if (a[pos]>a[j]) pos=j;
            swap(a[i],a[pos]);
            print();
        }
    }
}