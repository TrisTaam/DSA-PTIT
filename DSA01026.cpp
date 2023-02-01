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
string s;
string s1="68";

bool check(){
    if (s[0]=='6') return false;
    if (s.back()=='8') return false;
    int cnt1=0,cnt2=0;
    for(char x:s)
        if (x=='6'){
            cnt1++;
            cnt2=0;
            if (cnt1==4) return false;
        }
        else{
            cnt1=0;
            cnt2++;
            if (cnt2==2) return false;
        }
    return true;
}

void tried(int i){
    foru(j,0,1){
        s+=s1[j];
        if (i==n){
            if (check()) cout << s << "\n";
        }
        else tried(i+1);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        tried(1);       
    }
}