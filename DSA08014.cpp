#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=505;
int t,n,m,a[N][N],u,v,ans;
string s,s1;
map<string,bool> b;
bool vst[N][N];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

bool res(string s){
    for(char x:s)
        if (x=='1') return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        s="";
        foru(i,0,n-1)
            foru(j,0,m-1){
                cin >> a[i][j];
                s+=char(a[i][j]+'0');
            }
        ans=0;
        while(1){
            ans++;
            s1=s;
            fill(vst,false);
            foru(i,0,n-1)
                foru(j,0,m-1)
                    if (a[i][j]==2&&!vst[i][j]){
                        vst[i][j]=true;
                        foru(z,0,3){
                            u=i+dx[z];
                            v=j+dy[z];
                            if (u>=0&&u<n&&v>=0&&v<m&&a[u][v]==1){
                                a[u][v]=2;
                                vst[u][v]=true;
                                s1[u*m+v]='2';
                            }
                        }
                    }
            if (s==s1) break;
            s=s1;
        }
        ans--;
        cout << (res(s)?ans:-1) << "\n";
    }
}