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
    int t1,t2,n;cin>>t1>>t2>>n;
    double long dp[1000];
    dp[0]=t1,dp[1]=t2;
    for(int i=2;i<n;i++) {
        dp[i] = dp[i-2] + (dp[i-1]*dp[i-1]);
    }
    cout<<dp[n-1];
    return 0;
}
