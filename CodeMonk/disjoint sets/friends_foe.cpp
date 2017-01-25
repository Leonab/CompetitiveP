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

const int mod = 1e9+7;

struct sub {
    int par,sz;
};

vector<sub> subs;
vi filter;

int findy(int i) {
    if(subs[i].par!=i)
        subs[i].par = findy(subs[i].par);
    return subs[i].par;
}

void uni(int x, int y) {
    if(x==y)
        return;
    int xr = findy(x);
    int yr = findy(y);
    if(subs[xr].sz<subs[yr].sz) {
        subs[xr].par = yr;
        subs[yr].sz += subs[xr].sz;
    }
    else {
        subs[yr].par = xr;
        subs[xr].sz += subs[yr].sz;
    }
}

int main()
{
    int i,j,n,m;
    cin>>n>>m;
    subs.clear();
    subs.resize(n);
    filter.clear();
    filter.resize(n,0);
    rep(i,n) {
        subs[i].par = i;
        subs[i].sz = 1;
    }
    rep(i,m) {
        int x,y;cin>>x>>y;
        uni(findy(--x),findy(--y));
    }
    int en;cin>>en;
    rep(i,en) {
        int x,y,xr,yr;
        cin>>x>>y;
        xr = findy(--x);
        yr = findy(--y);
        if(xr==yr)
            filter[xr]=1;
    }
    ll ans =0;
    rep(i,n) {
    if(filter[findy(i)]==0)
        ans = max(ans, (ll)subs[i].sz);
    }
    cout<<ans<<endl;
 return 0;
}
