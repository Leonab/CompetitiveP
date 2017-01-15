#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int lego[4][4]={(1,1),(1,2),(1,3),(1,4)};

ll findWays(int n, int m) {
    if(n<=0||m<=0)
        return 0;
    if(n==1 || m==1)
        return 1;

    return 1+(findWays(n-1,m-lego[0][1])*findWays(n-1,m-lego[1][1])*findWays(n-1,m-lego[2][1])*findWays(n-1,m-lego[3][1]));


}

int main()
{
    int t;cin>>t;
    while(t--) {
        int n,m;cin>>n>>m;
        ll ans = findWays(n,m)%mod;
        cout<<ans<<endl;
    }
    return 0;
}
