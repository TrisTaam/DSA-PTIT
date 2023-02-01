#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int t,n,a[N],b[N];
vector<string> c;

void tried(int i,int j,string s){
    foru(z,j,n)
        if (a[z]>b[i-1]){
            b[i]=a[z];
            if (i>1) c.push_back(s+to_string(a[z])+" ");
            tried(i+1,z+1,s+to_string(a[z])+" ");
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,1,n) cin >> a[i];
        b[0]=0;
        tried(1,1,"");
        sort(c.begin(),c.end());
        for(string x:c) cout << x << "\n";
    }
}