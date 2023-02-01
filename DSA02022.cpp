#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

vector<string> a{"02","20","22"};
vector<string> b{"2000","2002","2020","2022","2200","2202","2220","2222"};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    foru(i,0,2) 
        foru(j,0,7) cout << a[i] << "/02/" << b[j] << "\n";
}