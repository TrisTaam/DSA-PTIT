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
int t,n,a[N],cnt;
vector<string> b;
string s;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        b.clear();
        cnt=0;
        foru(i,0,n-2){
            kt=false;
            foru(j,0,n-i-2)
                if (a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    kt=true;
                }
            if (!kt) break;
            s="Buoc "+to_string(++cnt)+": ";
            foru(j,0,n-1) s+=(to_string(a[j])+" ");
            b.push_back(s);
        }
        ford(i,b.size()-1,0) cout << b[i] << "\n";
    }
}