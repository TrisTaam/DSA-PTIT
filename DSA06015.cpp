#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n,a[N];

void merge(int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int b[n1],c[n2];
    foru(i,0,n1-1) b[i]=a[i+l];
    foru(i,0,n2-1) c[i]=a[i+m+1];
    int i=0,j=0;
    int z=l;
    while(i<n1&&j<n2)
        if (b[i]<c[j]) a[z++]=b[i++];
        else a[z++]=c[j++];
    while(i<n1) a[z++]=b[i++];
    while(j<n2) a[z++]=c[j++];
}

void mergeSort(int l,int r){
    if (l>=r) return;
    int m=(l+r)/2;
    mergeSort(l,m);
    mergeSort(m+1,r);
    merge(l,m,r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        mergeSort(0,n-1);
        foru(i,0,n-1) cout << a[i] << " ";
        cout << "\n";
    }
}