#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,k;
string s;
vector<string> a;
vector<string> b;

void print(){
    foru(i,0,k-1) cout << b[i] << " ";
    cout << "\n";
}

void tried(int i,int j){
    foru(z,j,a.size()-1){
        b.push_back(a[z]);
        if (i==k-1) print();
        else tried(i+1,z+1);
        b.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n >> k;
        while(n--){
            cin >> s;
            if (a.empty()||find(a.begin(),a.end(),s)==a.end()) a.push_back(s);
        }
        sort(a.begin(),a.end());
        tried(0,0);
    }
}