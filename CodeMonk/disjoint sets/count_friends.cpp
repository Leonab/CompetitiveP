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

int par[100005],ans[100005];

int fun( int x) {
    if(x != par[x]) {
        par[x] = fun(par[x]);
    }
    return par[x];
}

int main()
{
    int n,m,u,v,i;
    cin>>n>>m;
    for(i=1;i<=n;i++) {
        par[i]=i;
    }
    while(m--) {
        int a,b;
        cin>>u>>v;
        a = fun(u);
        b= fun(v);
        if(par[a]==par[b])
            continue;
        par[a] = par[b];
    }
    for(i=1;i<=n;i++) {
        ans[fun(i)]++;
    }
    for(i=1;i<=n;i++) {
        cout<<ans[fun(i)]-1<<' ';
    }cout<<endl;
    return 0;
}
