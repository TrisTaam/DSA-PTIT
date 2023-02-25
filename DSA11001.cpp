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
string s,a,b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        stack<string> s1;
        for(char x:s)
            if (isalpha(x)) s1.push(string(1,x));
            else{
                a=s1.top();s1.pop();
                b=s1.top();s1.pop();
                s1.push(b+x+a);
            }
        cout << s1.top() << "\n";
    }
}