#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a,b;
ll n,cnt1,cnt2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> a;
        if (n%1000) cout << 0;
        else{
            n/=1000;
            cnt1=0;
            cnt2=1;
            while(n&&a--){
                b=n%10;
                if (b==1||b==2||b==3||b==5) cnt1++;
                else if (b==4||b==6){
                    cnt1+=2;
                    cnt2*=2;
                }
                else if (b==7||b==8) cnt1+=2;
                else if (b==9){
                    cnt1+=3;
                    cnt2*=3;
                }
                n/=10;
            }
            if (n){
                cnt1+=n/5;
                if (n%5==4){
                    cnt1+=2;
                    if (n==4) cnt2*=2;
                    else cnt2*=3; 
                }
                else if (n%5){
                    cnt1++;
                    if ((n%5==1&&n>1)) cnt2*=2;
                }
            }
            cout << cnt1 << " " << cnt2;
        }
        cout << "\n";
    }
}