#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,c;
string s,s1,s2,s3,ans;
char a;
vector<pair<int,bool>> b;

bool check(string s,char a){
    int n1=stoi(s.substr(0,2));
    int n2=stoi(s.substr(2,2));
    int n3=stoi(s.substr(4,2));
    if (a=='+') return n1+n2==n3;
    if (a=='-') return n1-n2==n3;
    if (a=='*') return n1*n2==n3;
    return n1%n2==0&&n1/n2==n3;
}

string convert(string s,char a){
    return s.substr(0,2)+" "+a+" "+s.substr(2,2)+" = "+s.substr(4,2);
}

void tried(int i){
    foru(j,b[i].se?0:1,9){
        s[b[i].fi]=char(j+'0');
        if (i==b.size()-1){
            if (a=='+'){
                if (check(s,'+')){
                    ans=convert(s,'+');
                    return;
                }
            }
            else if (a=='-'){
                if (check(s,'-')){
                    ans=convert(s,'-');
                    return;
                }
            }
            else if (a=='*'){
                if (check(s,'*')){
                    ans=convert(s,'*');
                    return;
                }
            }
            else if (a=='/'){
                if (check(s,'/')){
                    ans=convert(s,'/');
                    return;
                }
            }
            else{
                if (check(s,'+')){
                    ans=convert(s,'+');
                    return;
                }
                if (check(s,'-')){
                    ans=convert(s,'-');
                    return;
                }
                if (check(s,'*')){
                    ans=convert(s,'*');
                    return;
                }
                if (check(s,'/')){
                    ans=convert(s,'/');
                    return;
                }
            }
        }
        else tried(i+1);
        if (ans!="WRONG PROBLEM!") return;
        s[b[i].fi]='?';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        while(s[0]==' ') s.erase(0,1);
        while(s.back()==' ') s.pop_back();
        c=s.find(" ");
        while(c!=string::npos){
            s.erase(c,1);
            c=s.find(" ");
        }
        s1=s.substr(0,2);
        s2=s.substr(3,2);
        s3=s.substr(6,2);
        a=s[2];
        s=s1+s2+s3;
        b.clear();
        foru(i,0,5)
            if (s[i]=='?'){
                if (i%2==0) b.push_back({i,false});
                else b.push_back({i,true});
            }
        ans="WRONG PROBLEM!";
        if (b.empty()){
            if (a=='+'){
                if (check(s,'+')) ans=convert(s,'+');
            }
            else if (a=='-'){
                if (check(s,'-')) ans=convert(s,'-');
            }
            else if (a=='*'){
                if (check(s,'*')) ans=convert(s,'*');
            }
            else if (a=='/'){
                if (check(s,'/')) ans=convert(s,'/');
            }
            else{
                if (check(s,'+')) ans=convert(s,'+');
                else if (check(s,'-')) ans=convert(s,'-');
                else if (check(s,'*')) ans=convert(s,'*');
                else if (check(s,'/')) ans=convert(s,'/');
            }
        }
        else tried(0);
        cout << ans << "\n";
    }
}