#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,s,s2,d,a;
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
    t=1;
    while(t--){
        cin >> d >> s;
        if (!s&&d==1) cout << "0 0";
        else if (s>d*9) cout << "-1 -1";
        else{
            s1="";
            s2=s;
            kt=false;
            tried(1);
            cout << (kt?s1:"-1") << " ";
            s1="";
            foru(i,1,s2/9) s1+="9";
            if (s1.empty()) cout << -1;
            else{
                s1+=char(s2%9+'0');
                while(s1.size()<d) s1+="0";
                cout << s1;
            }
        }
        cout << "\n";
    }
}