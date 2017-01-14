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

int n,k;
ll editDist(ll *a, int m ,int n)
{
    if (m == 0) return n;

    if (n == 0) return m;

    ll prod=0;
    for(int i=m;i<n;i++) {
        prod+=a[i]*a[+1];
    }

    return prod;

    return max ( editDist(a, m, n-1), editDist(a, m+1, n));


}

int main()
{
    int t;cin>>t;
    while(t--) {
        cin>>n>>k;
        ll a[n];
        rep(i,n) {
            cin>>a[i];
        }
        //ll dp[n+1][n+1];
        ll prod=0;
        rep(i,k) {
            prod+=editDist(a,0,n);
        }
        cout<<prod<<endl;
    }
    return 0;
}
