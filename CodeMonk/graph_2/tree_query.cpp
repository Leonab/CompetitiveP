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

vector<ll> adj1[200001],adj2[200001];

int main()
{
    ll n,m;cin>>n>>m;
    for(ll i=1;i<=m;i++) {
        ll u,v;cin>>u>>v;
        adj1[u].pb(v);
        adj2[v].pb(u);
    }

    int mx1=0,mx2=0;
    for(ll i=1;i<=n;i++) {
        if(adj1[i].size()<1)
            mx1++;
        //cout<<adj1[i].size()<<' ';
        if(adj2[i].size()<1)
            mx2++;
    }
    cout<< max(mx1,mx2);
    return 0;
}
