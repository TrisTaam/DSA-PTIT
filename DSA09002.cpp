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
int t,n,tmp;
set<ii> a;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        cin.ignore();
        foru(i,1,n){
            getline(cin,s);
            s+=" ";
            tmp=0;
            for(char x:s)
                if (isdigit(x)) tmp=tmp*10+x-'0';
                else{
                    if (i<tmp) a.insert({i,tmp});
                    else a.insert({tmp,i});
                    tmp=0;
                }
        }
        for(ii x:a) cout << x.fi << " " << x.se << "\n";
    }
}