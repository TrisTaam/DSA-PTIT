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
const int A=1005;
int t,n,k,a,i,d[N];
bool b[A];
vector<int> c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> k;
        while(n--){
            cin >> a;
            b[a]=true;
        }
        foru(i,1,1000)
            if (b[i]) c.push_back(i);
        foru(i,0,k-1) d[i]=i;
        foru(i,0,k-1) cout << c[i] << " ";
        cout << "\n";
        while(1){
            i=k-1;
            while(d[i]==c.size()-k+i) i--;
            if (i==-1) break;
            else{
                d[i]++;
                foru(j,i+1,k) d[j]=d[j-1]+1;
            }
            foru(i,0,k-1) cout << c[d[i]] << " ";
            cout << "\n";
        }
    }
}