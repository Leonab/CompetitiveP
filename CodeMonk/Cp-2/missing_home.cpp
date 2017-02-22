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

int pa[100015],sz[100015];
map<ll,ll> m[100015];

int fun(int x) {
    if(pa[x]==x)
        return x;
    return pa[x] = fun(pa[x]);
}

ll ans =0;
int d;

void join(int u,int v) {
    u = fun(u);
    v = fun(v);
    if(sz[u]<sz[v])
        swap(u,v);
    sz[u] += sz[v];
    pa[v] = u;
    for(auto x:m[v]) {
        for(int j=-d;j<=d;j++) {
            if(m[u].find(x.first+j)!=m[u].end()) {
                ans+=x.second*m[u][x.first+j];
            }
        }
    }
    for(auto x:m[v]) {
        m[u][x.first] +=x.second;
    }
}

ll pt[100015],a[100015];

int main()
{
    int n;cin>>n>>d;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        pa[i] = i;
        sz[i] = 1;
        m[i][a[i]] = 1;
    }
    int u,v;
    vector<ii> e;
    rep(i,n-1) {
        cin>>u>>v;
        e.pb({u,v});
    }
    vi s(n-1);
    rep(i,n-1) {
        cin>>s[i];
        s[i]--;
    }
    for(int i=s.size()-1;i>=0;i--) {
        pt[i] = ans;
        join(e[s[i]].first,e[s[i]].second);
    }
    rep(i,n-1) cout<<pt[i]<<endl;

    return 0;
}
