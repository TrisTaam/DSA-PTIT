#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n;
string a[N*2];

int cmp(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    if (s1<s2) return -1;
    if (s1==s2) return 0;
    return 1;
}

string add(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    int a,b=0;
    string s="";
    ford(i,s1.size()-1,0){
        a=s1[i]+s2[i]-'0'*2+b;
        s=char(a%10+'0')+s;
        b=a/10;
    }
    if (b) s="1"+s;
    while(s.size()>1&&s[0]=='0') s.erase(0,1);
    return s;
}

string sub(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    int a,b=0;
    string s="";
    ford(i,s1.size()-1,0){
        a=s1[i]-s2[i]-b;
        if (a<0){
            a+=10;
            b=1;
        }
        else b=0;
        s=char(a+'0')+s;
    }
    while(s.size()>1&&s[0]=='0') s.erase(0,1);
    return s;
}

string multi(string s1,string s2){
    int n1=s1.size();
    int n2=s2.size();
    int a[n1+n2]={0};
    foru(i,0,n1-1)
        foru(j,0,n2-1) a[i+j]+=(s1[i]-'0')*(s2[j]-'0');
    int b,c=0;
    string s="";
    ford(i,n1+n2-2,0){
        b=a[i]+c;
        a[i]=b%10;
        s=char(a[i]+'0')+s;
        c=b/10;
    }
    if (c) s=char(c+'0')+s;
    while(s.size()>1&&s[0]=='0') s.erase(0,1);
    return s;
}

string div(string s1,string s2){
    string a[11];
    a[0]="0";
    foru(i,1,10) a[i]=add(a[i-1],s2);
    string s="",tmp="";
    int b;
    foru(i,0,s1.size()-1){
        tmp+=s1[i];
        b=1;
        while(cmp(tmp,a[b])>-1) b++;
        b--;
        s+=char(b+'0');
        tmp=sub(tmp,a[b]);
    }
    while(s.size()>1&&s[0]=='0') s.erase(0,1);
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[0]="1";
    foru(i,1,200) a[i]=multi(a[i-1],to_string(i));
    cin >> t;
    while(t--){
        cin >> n;
        cout << div(a[n*2],multi(a[n],a[n+1])) << "\n";
    }
}