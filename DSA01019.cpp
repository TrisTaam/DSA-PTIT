#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=20;
int t,n,cnt;
char a[N];
string s1="AH";

void print(){
    foru(i,1,n) cout << a[i];
    cout << "\n";
}

void tried(int i){
    foru(j,0,1)
        if (!j||(j&&a[i-1]!='H')){
            a[i]=s1[j];
            if (i==n-1) print();
            else tried(i+1);
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        if (n==2) cout << "HA\n";
        else{
            a[1]='H';
            a[n]='A';
            foru(i,2,n-1) a[i]=' ';
            tried(2);
        }
    }
}