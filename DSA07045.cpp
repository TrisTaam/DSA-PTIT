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
string s,s1,s2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> s;
        s1="";
        s2="";
        for(char x:s)
            if (x=='<'){
                if (!s1.empty()){
                    s2+=s1.back();
                    s1.pop_back();
                }
            }
            else if (x=='>'){
                if (!s2.empty()){
                    s1+=s2.back();
                    s2.pop_back();
                }
            }
            else if (x=='-'){
                if (!s1.empty()) s1.pop_back();
            }
            else s1+=x;
        while(!s2.empty()){
            s1+=s2.back();
            s2.pop_back();
        }
        cout << s1 << "\n";
    }
}