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
    rep(i,n) {
        subs[i].par = i;
        subs[i].sz = 1;
    }
    rep(i,m) {
        int x,y;cin>>x>>y;
        j=0;
        while(x+j<y-j) {
            uni(findy(x+j-1),findy(y-j-1));
            j++;
        }
    }
    ll ans =1;
    rep(i,n) {
        if(findy(i)==i)
            ans = (ans*(ll)10)%mod;
    }
    cout<<ans<<endl;
    return 0;}
