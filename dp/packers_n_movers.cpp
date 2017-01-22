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
    int m,p;cin>>m>>p;
    int a[p];
    rep(i,p) {
        cin>>a[i];
    }
    ll dp[p];
    dp[0] = a[0];
    //memset(dp,0,sizeof dp);
    for(int i=1;i<=p;i++) {
        dp[i] = dp[i-1] + a[i];
    }
    int mi = INT_MIN;
    rep(i,p) {
        if(a[i]>mi)
            mi = a[i];
    }
    if(p-m-1>=0)
        cout<<dp[p-m-1];
    else
        cout<<mi;


    ll load = 0;

    return 0;
}
