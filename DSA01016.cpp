#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;
vector<int> a;

void print(){
    cout << "(" << a[0];
    foru(i,1,a.size()-1) cout << " " << a[i];
    cout << ") ";
}

void tried(int i){
    ford(j,i,1){
        n-=j;
        a.push_back(j);
        if (!n) print();
        else if (n>0) tried(j);
        n+=j;
        a.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        tried(n);
        cout << "\n";
    }
}