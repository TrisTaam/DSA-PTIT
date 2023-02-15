#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
int t,n;
string a,s1,s2;
set<string> b;

bool check(string s1,string s2){
    int cnt=0;
    foru(i,0,s1.size()-1){
        cnt+=(s1[i]!=s2[i]);
        if (cnt==2) return false;
    }
    return cnt==1;
}

int bfs(string s1,string s2){
    queue<pair<string,int>> q;
    q.push(make_pair(s1,1));
    pair<string,int> x;
    string tmp;
    while(1){
        x=q.front();q.pop();
        if (x.fi==s2) return x.se;
        foru(i,0,x.fi.size()-1){
            tmp=x.fi;
            foru(j,'A','Z'){
                tmp[i]=j;
                if (b.find(tmp)!=b.end()){
                    q.push({tmp,x.se+1});
                    b.erase(tmp);
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s1 >> s2;
        b.clear();
        foru(i,0,n-1){
            cin >> a;
            b.insert(a);
        }
        cout << bfs(s1,s2) << "\n";
    }
}