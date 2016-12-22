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

ll anc[510][510]={0};


int main()
{
    ll n,K;cin>>n>>K;

    ll a[1000],par[1000];
    for(ll i=1;i<=n;i++){
    cin>>a[i];
    }
    for(ll i=2;i<=n;i++){
        ll temp;cin>>temp;
        par[i]=temp;
    }
    for(ll i=2;i<=n;i++){
        ll x=i;
    while(x!=1){
        x=par[x];
        anc[x][i]=1;
    }
    }

    ll ans=0;
    for(ll i=1;i<=n;i++)
    for(ll j=1;j<=n;j++)
    for(ll k=1;k<=n;k++){
        if(i==j || j==k || k==i)
            continue;
        if(anc[i][j] && anc[i][k] && a[i]+a[k]+a[j]>=K)
            ans++;
    }
    cout<<ans/2<<endl;
    return 0;
}
