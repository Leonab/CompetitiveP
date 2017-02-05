#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll unsigned long long

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int main()
{
    int t;cin>>t;
    while(t--) {
        ll n,W;cin>>n>>W;
        ll w[n],v[n];
        ll dp[n+1][W+1];
        rep(i,n) cin>>w[i];
        rep(i,n) cin>>v[i];
        memset(dp,0,sizeof dp);

        if(W==0) {
            cout<<'0'<<endl;
            continue;
        }

        for(int i=0;i<=n;i++) {
            for(int j=0;j<=W;j++) {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(w[i-1]<=j)
                    dp[i][j] = max(v[i-1] + dp[i-1][j-w[i-1]],dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        cout<<dp[n][W]<<endl;
    }
    return 0;
}
