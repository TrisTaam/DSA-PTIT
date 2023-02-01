#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a;
string s;
bool b[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(b,false);
        while(n--){
            cin >> a;
            s=to_string(a);
            for(char x:s) b[x-'0']=true;
        }
        foru(i,0,9)
            if (b[i]) cout << i << " ";
        cout << "\n";
    }
}