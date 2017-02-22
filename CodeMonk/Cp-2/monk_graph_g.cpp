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

const int inf = 1e9;
int n,m;
int l[100015],r[100015];
vi g[100015];

void bfs(int s, int *d) {
    queue<int> q;
    for(int i=1;i<=n;i++) {
        d[i] = inf;
    }
    q.push(s);
    d[s] = 0;
    while(q.size()) {
        int u = q.front();
        q.pop();
        for(auto x:g[u]) {
            if(d[x]>d[u]+1) {
                d[x] = d[u] + 1;
                q.push(x);
            }
        }
    }
}

vi s[100015];

int main()
{
    cin>>n>>m;
    int u,v;
    rep(i,m) {
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    int a,b;
    cin>>a>>b;
    bfs(a,l);
    bfs(b,r);
    for(int i=1;i<=n;i++) {
        if(l[i]+r[i]==l[b] && l[i]!=inf) {
            s[l[i]].pb(i);
        }
    }
    int ans = inf;
    for(int i=1;i<=n;i++) {
        if(s[i].size()==1 && (s[i][0]!=a &&s[i][0]!=b)) {
            ans = min(ans,s[i][0]);
        }
    }
    if(ans==inf)
        ans=-1;
    cout<<ans;
    return 0;
}
