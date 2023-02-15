#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,ans,cnt;
string a[N];

int res(string s1,string s2){
    int i=0,j=0,ans=0;
    while(i<s1.size()&&j<s2.size())
        if (s1[i]==s2[j]){
            ans++;
            i++;
            j++;
        }
        else if (s1[i]<s2[j]) i++;
        else j++;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t=1;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        ans=INT_MAX;
        do{
            cnt=0;
            foru(i,0,n-2){
                cnt+=res(a[i],a[i+1]);
                if (cnt>=ans) break;
            }
            ans=min(ans,cnt);
        }while(next_permutation(a,a+n));
        cout << ans << "\n";
    }
}