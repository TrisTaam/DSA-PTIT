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
map<string,int> b;
string s1,s2;
int l1[10]={3,0,2,7,4,1,6,8,5,9};
int r1[10]={0,4,1,3,8,5,2,7,9,6};
int l2[10]={1,5,2,0,4,8,6,3,7,9};
int r2[10]={0,2,6,3,1,5,9,7,4,8};
 
string left1(string a){
    string s="";
    foru(i,0,9) s+=a[l1[i]];
    return s;
}
 
string right1(string a){
    string s="";
    foru(i,0,9) s+=a[r1[i]];
    return s;
}
 
string left2(string a){
    string s="";
    foru(i,0,9) s+=a[l2[i]];
    return s;
}
 
string right2(string a){
    string s="";
    foru(i,0,9) s+=a[r2[i]];
    return s;
}

void bfs1(string a){
    queue<pair<string,int>> q;
    q.push({a,0});
    pair<string,int> x;
    string s;
    while(1){
        x=q.front();q.pop();
        if (x.se==13) return;
        s=left1(x.fi);
        if (!b[s]){
            b[s]=x.se+1;
            q.push({s,x.se+1});
        }
        s=right1(x.fi);
        if (!b[s]){
            b[s]=x.se+1;
            q.push({s,x.se+1});
        }
    }
}

int bfs2(string a){
    queue<pair<string,int>> q;
    q.push({a,0});
    pair<string,int> x;
    string s;
    int ans=INT_MAX;
    while(1){
        x=q.front();q.pop();
        if (b[x.fi]) ans=min(ans,x.se+b[x.fi]);
        if (x.se==13) return ans;
        q.push({left2(x.fi),x.se+1});
        q.push({right2(x.fi),x.se+1});
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        s1="";
        foru(i,1,10){
            cin >> x;
            s1+=char(x+'0');
        }
        s2="1238004765";
        b.clear();
        bfs1(s1);
        cout << bfs2(s2) << "\n";
    }
}