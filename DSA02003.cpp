#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,a[N][N];
string s;
vector<string> b;
string s1="DR";

void tried(int i,int j){
    if (i==n-1&&j==n-1){
        b.push_back(s);
        return;
    }
    if (i<n-1&&a[i+1][j]){
        s+='D';
        tried(i+1,j);
        s.pop_back();
    }
    if (j<n-1&&a[i][j+1]){
        s+='R';
        tried(i,j+1);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1)
            foru(j,0,n-1) cin >> a[i][j];
        if (!a[0][0]) cout << -1;
        else{
            b.clear();
            tried(0,0);
            if (b.empty()) cout << -1;
            else
                for(string x:b) cout << x << " ";
        }
        cout << "\n";
    }
}