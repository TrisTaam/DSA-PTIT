#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
string s,ans;
vector<string> a;

bool check(string s1){
    int j=0;
    for(char x:s){
        if (x==s1[j]) j++;
        if (j==s1.size()) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ford(i,100,1) a.push_back(to_string((ll)i*i*i));
    cin >> t;
    while(t--){
        cin >> s;
        ans="-1";
        foru(i,0,a.size()-1)
            if (a[i].size()<s.size())
                if (check(a[i])){
                    ans=a[i];
                    break;
                }
        cout << ans << "\n";
    }
}