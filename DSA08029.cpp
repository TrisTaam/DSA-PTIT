#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,x;
string s1,s2;
int sleft[6]={3,0,2,4,1,5};
int sright[6]={0,4,1,3,5,2};

string left(string s){
    string s1="";
    foru(i,0,5) s1+=s[sleft[i]];
    return s1;
}

string right(string s){
    string s1="";
    foru(i,0,5) s1+=s[sright[i]];
    return s1;
}

int bfs(string s1,string s2){
    queue<pair<string,int>> q;
    map<string,bool> a;
    q.push({s1,0});
    a[s1]=true;
    pair<string,int> x;
    string s;
    while(1){
        x=q.front();q.pop();
        if (x.fi==s2) return x.se;
        s=left(x.fi);
        if (!a[s]){
            a[s]=true;
            q.push({s,x.se+1});
        }
        s=right(x.fi);
        if (!a[s]){
            a[s]=true;
            q.push({s,x.se+1});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        s1="";
        foru(i,1,6){
            cin >> x;
            s1+=char(x+'0');
        }
        s2="";
        foru(i,1,6){
            cin >> x;
            s2+=char(x+'0');
        }
        cout << bfs(s1,s2) << "\n";
    }
}