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

ll cnt[100005];
vector<ll> adj[1000005];

int main()
{
    ll n;cin>>n;
    ll a[n];
    memset(cnt,0,sizeof cnt);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    bool flag=0;
    for(ll i=0;i<n;i++) {
        if(cnt[a[i]]>1) {
            //adj[a[i]].pb(0);
            adj[a[i]].pb(i);
            flag=1;
        }
    }
    //cout<<adj.length();
    for(ll i=0;i<n;i++) {
        if(cnt[a[i]]>1) {
            sort(adj[i].begin(),adj[i].end());
        }
    }
    ll mx=-1;
    if(flag) {
        for(ll i=0;i<n;i++)
        if(cnt[a[i]]>1) {
        for(int j=0;j<adj[i].size();j++) {
            ll z = abs(adj[i][0]-adj[i][adj[i].size()-1]);
            //cout<<z<<endl;
            if(z>mx)
                mx=z;
        }
        }

    cout<<mx;
    //return 0;
    }
    else
    cout<<mx;
    return 0;
}
