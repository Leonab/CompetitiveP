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
    const int siz = 200000;
    ll n;cin>>n;
    ll a[n],dist = INT_MAX;
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    for(ll i=1;i<n;i++) {
            if(abs(a[i]-a[i-1])<dist)
                dist = abs(a[i]-a[i-1]);
            if(dist<1)
                break;
    }
    cout<<dist;
    return 0;
}
