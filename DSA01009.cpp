#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,k;
string s;
vector<string> a;

bool check(string s){
    int cnt=0;
    bool kt=false;
    for(char x:s){
        if (x=='A') cnt++;
        else cnt=0;
        if (cnt==k){
            if (kt) return false;
            kt=true;
        }
        if (cnt>k) return false;
    }
    return kt;
}

void tried(int i){
    foru(j,'A','B'){
        s+=j;
        if (i==n){
            if (check(s)) a.push_back(s);
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
        cin >> n >> k;
        s="";
        tried(1);
        cout << a.size() << "\n";
        for(string x:a) cout << x << "\n";
    }
}