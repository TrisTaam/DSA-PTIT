#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int S=4e4+5;
int t,n,s,a;
bool b[S];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s;
        fill(b,false);
        b[0]=true;
        foru(i,1,n){
            cin >> a;
            b[a]=true;
            ford(j,s,a)
                if (b[j-a]) b[j]=true;
        }
        cout << (b[s]?"YES":"NO") << "\n";
    }
}