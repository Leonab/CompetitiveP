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
    ll n;cin>>n;
    ll a[n],dp[n+1];
    rep(i,n) {
        cin>>a[i];
    }
    //memset(dp,1,sizeof dp);
    rep(i,n)
    dp[i]=1;
    for(ll i=1;i<n;i++) {
        if(a[i]>a[i-1])
        dp[i] = dp[i-1]+1;
    }
    for(ll i=n-2;i>=0;i--) {
        if(a[i]>a[i+1])
            dp[i] = max(dp[i],dp[i+1]+1);
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
    sum+=dp[i];
    cout<<sum;
    return 0;
}
