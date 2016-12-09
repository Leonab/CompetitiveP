#include<bits/stdc++.h>
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define repg(i,j,N) for((i)=(j);(i)<(N);(i)++)

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
#define sz(a) int((a).size())


int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k;
    vi a;
    cin>>n>>k;
    rep(i,n){
      int z;cin>>z;
      a.push_back(z);
    }
    int b[n];
    rep(i,n){
      int idx = (i+k)%n;
      b[idx] = a[i];
    }
    rep(i,n)
    cout<<b[i]<<" ";
    cout<<endl;
    }
    return 0;
}
