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

int a[100011],p[100011];

int main()
{
    int n;cin>>n;
    ll cnt[2] = {0};
    cnt[0] = 1;
    ll ans = 0;

    for(int i=1;i<=n;i++) {
        cin>>a[i];
        p[i] = p[i-1] + a[i];
        p[i]%=2;
        ans+=cnt[p[i]];
        cnt[p[i]]++;
    }

    cout<<ans;
    return 0;
}
