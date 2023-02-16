#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,b,c;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<int> a;
        for(char x:s)
            if (x=='+'||x=='-'||x=='*'||x=='/'){
                b=a.top();a.pop();
                c=a.top();a.pop();
                if (x=='+') c+=b;
                else if (x=='-') c-=b;
                else if (x=='*') c*=b;
                else c/=b;
                a.push(c);
            }
            else a.push(x-'0');
        cout << a.top() << "\n";
    }
}