#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int main()
{
    int n,m;cin>>n>>m;
    ll a[n][m],dp[n][m];
    rep(i,n) {
        rep(j,m) {
            scanf("%ld",&a[i][j]);
        }
    }
    dp[0][0]=a[0][0];
    memset(dp,0,sizeof dp);
    int maxus=-1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i==0 || j==0 || i==n-1 || j==m-1) {
                for(int k=i;k<n;k++) {
                    for(int l=j;l<m;l++) {
                        int xo = a[i][j]^a[k][l];
                        if(xo>dp[i][j]) {
                           dp[i][j] = xo;
                        }
                    }
                }
        if(dp[i][j]>maxus)
            maxus = dp[i][j];
            }
        }
    }
    cout<<maxus;
    return 0;
}
