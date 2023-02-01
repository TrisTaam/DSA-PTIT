#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int n;
string s;

bool palin(string s){
    int n=s.size();
    foru(i,0,n/2)
        if (s[i]!=s[n-i-1]) return false;
    return true;
}

void print(string s){
    for(char x:s) cout << x << " ";
    cout << "\n";
}

void tried(int i){
    foru(j,0,1){
        s+=char(j+'0');
        if (i==n){
            if (palin(s)) print(s);
        }
        else tried(i+1);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    tried(1);
}