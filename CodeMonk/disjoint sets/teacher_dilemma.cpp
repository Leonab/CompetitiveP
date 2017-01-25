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

    for(i=0;i<n;i++) {
        subs[i].par = i;
        subs[i].sz = 1;
    }
    for(i=0;i<m;i++) {
        int x,y;cin>>x>>y;
        uni(findy(--x),findy(--y));
    }
    ll ans =1;
    for(i=0;i<n;i++) {
        if(findy(i)==i)
            ans = (ans*subs[findy(i)].sz)%mod;
    }
    cout<<ans<<endl;
    return 0;
}

