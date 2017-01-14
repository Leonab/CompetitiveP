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

int cnt[100000];
vector<ll> adj[1000];

int main()
{
    ll n;cin>>n;
    ll a[n];
    memset(cnt,0,sizeof cnt);
    rep(i,n) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    bool flag=0;
    rep(i,n) {
        if(cnt[a[i]]>1) {
            adj[a[i]].pb(i);
            flag=1;
        }
    }
    int mx=-1;
    if(flag) {
        rep(i,n)
        for(int j=0;j<adj[i].size();i++) {
            int z = abs(adj[i][0]-adj[i][adj[i].size()-1]);
            if(z>mx&&z>0)
                mx=z;
        }

    cout<<mx;
    return 0;
    }
        cout<<mx;
    return 0;
}
