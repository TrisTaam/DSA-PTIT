#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,k,pos;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> k;
        cin >> s;
        for(int i=0;i<s.size()&&k;++i){
            pos=i;
            foru(j,i+1,s.size()-1)
                if (s[pos]<=s[j]) pos=j;
            if (i<pos&&s[i]<s[pos]){
                swap(s[i],s[pos]);
                k--;
            }
        }
        cout << s << "\n";
    }
}