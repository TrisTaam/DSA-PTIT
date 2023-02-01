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
string s;
char a;
bool kt;

bool vowel(char a){
    return a=='A'||a=='E';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> a;
        s="";
        foru(i,int('A'),int(a)) s+=char(i);
        do{
            kt=true;
            foru(i,1,s.size()-2)
                if (vowel(s[i])&&!vowel(s[i-1])&&!vowel(s[i+1])){
                    kt=false;
                    break;
                }
            if (kt) cout << s << "\n";
        }while(next_permutation(s.begin(),s.end()));
    }
}