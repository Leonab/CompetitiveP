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

struct subset {
    int par,sz;
    int girls,boys;
};

vector<subset> subs;

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
        subs[yr].girls += subs[xr].girls;
        subs[yr].boys += subs[xr].boys;

    }
    else {
        subs[yr].par = xr;
        subs[xr].sz += subs[yr].sz;
        subs[xr].girls += subs[yr].girls;
        subs[xr].boys += subs[yr].boys;
    }
}

int main()
{
    int x,y,i,j,n,m;
    cin>>x>>y;
    n = x+y;
    subs.clear();
    subs.resize(n);

    rep(i,n) {
        subs[i].par = i;
        subs[i].sz = 1;
        subs[i].girls = 0;
        subs[i].boys = 0;
        if(i<x)
            subs[i].boys = 1;
        else
            subs[i].girls = 1;
    }
    int q1,q2,q3,a,b;
    cin>>q1;
    rep(i,q1) {
        cin>>a>>b;
        uni(findy(a-1),findy(b-1));
    }
    cin>>q2;
    rep(i,q2) {
        cin>>a>>b;
        uni(findy(x+a-1),findy(x+b-1));
    }
    cin>>q3;
    rep(i,q3) {
        cin>>a>>b;
        uni(findy(a-1),findy(x+b-1));
    }
    ll ans = 0;
    rep(i,x) {
        ll temp = (y-subs[findy(i)].girls);
        ans+=temp;
    }
    cout<<ans<<endl;
    return 0;
}
