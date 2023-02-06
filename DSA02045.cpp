#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;
string s,s1;

void tried(int i){
    foru(j,i,n-1){
        s1+=s[j];
        if (s1.size()<=n) cout << s1 << " ";
        if (j<n-1) tried(j+1);
        s1.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        sort(s.begin(),s.end());
        s1="";
        tried(0);
        cout << "\n";
    }
}