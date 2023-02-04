#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=45;
int t,n,a[N],b;
string s;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        if (s[0]=='0') cout << 0;
        else{
            s=" "+s;
            a[0]=a[1]=1;
            kt=true;
            foru(i,2,n){
                if (s[i]=='0'){
                    if (s[i-1]>'2'){
                        kt=false;
                        break;
                    }
                    a[i]=0;
                }
                else a[i]=a[i-1];
                b=(s[i-1]-'0')*10+s[i]-'0';
                if (b>=10&&b<=26) a[i]+=a[i-2];
            }
            cout << (kt?a[n]:0);
        }
        cout << "\n";
    }
}