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
const int S=2e4+5;
int t,n,s,a[N];
bool b[S];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        s=0;
        foru(i,1,n){
            cin >> a[i];
            s+=a[i];
        }
        if (s&1) cout << "NO";
        else{
            s/=2;
            fill(b,false);
            b[0]=true;
            foru(i,1,n){
                b[a[i]]=true;
                ford(j,s,a[i])
                    if (b[j-a[i]]) b[j]=true;
            }
            cout << (b[s]?"YES":"NO");
        }
        cout << "\n";
    }
}