#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,n,a[N],s,cnt;
bool b[N];

void print(){
    bool kt=false;
    foru(i,0,n-1)
        if (!b[i]){
            kt=true;
            cout << a[i];
        }
    if (!kt) cout << -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        s=0;
        foru(i,0,n-1){
            cin >> a[i];
            s+=a[i];
        }
        sort(a,a+n,greater<int>());
        fill(b,false);
        if (s%3==0) print();
        else if (s%3==1){
            cnt=0;
            ford(i,n-1,0)
                if (a[i]%3==1){
                    cnt=1;
                    b[i]=true;
                    break;
                }
            if (!cnt){
                ford(i,n-1,0)
                    if (a[i]%3==2){
                        cnt++;
                        b[i]=true;
                        if (cnt==2) break;
                    }
                if (cnt<2) cout << -1;
                else print();
            }
            else print();
        }
        else{
            cnt=0;
            ford(i,n-1,0)
                if (a[i]%3==2){
                    cnt=1;
                    b[i]=true;
                    break;
                }
            if (!cnt){
                ford(i,n-1,0)
                    if (a[i]%3==1){
                        cnt++;
                        b[i]=true;
                        if (cnt==2) break;
                    }
                if (cnt<2) cout << -1;
                else print();
            }
            else print();
        }
        cout << "\n";
    }
}