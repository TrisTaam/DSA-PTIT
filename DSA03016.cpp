#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,s,d,a;
string s1;
bool kt;

void tried(int i){
    foru(j,i==1?1:0,9){
        s1+=char(j+'0');
        s-=j;
        if (i==d){
            if (!s){
                kt=true;
                return;
            }
        }
        else if (s>0&&s<=(d-i)*9) tried(i+1);
        if (kt) return;
        s1.pop_back();
        s+=j;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s >> d;
        if (!s&&d==1) cout << 0;
        else if (s>d*9) cout << -1;
        else{
            s1="";
            kt=false;
            tried(1);
            cout << (kt?s1:"-1");
        }
        cout << "\n";
    }
}