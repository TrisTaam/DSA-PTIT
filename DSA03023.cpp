#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
int t,n,dx,dt,dd,a,ans;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        cin >> s;
        dx=dt=dd=0;
        for(char x:s)
            if (x=='X') dx++;
            else if (x=='T') dt++;
            else dd++;
        ans=0;
        foru(i,0,s.size()-1)
            if (s[i]=='T'){
                a=s.find('X',dx);
                if (a!=string::npos){
                    swap(s[i],s[a]);
                    ans++;
                }
            }
            else if (s[i]=='D'){
                a=s.find('X',dx+dt);
                if (a==string::npos) a=s.find('X',dx);
                if (a!=string::npos){
                    swap(s[i],s[a]);
                    ans++;
                }
            }
        foru(i,dx,dx+dt-1)
            if (s[i]=='D'){
                a=s.find('T',dx+dt);
                if (a!=string::npos){
                    swap(s[i],s[a]);
                    ans++;
                }
            }
        cout << ans << "\n";
    }
}