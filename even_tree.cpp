#include <bits/stdc++.h>
#define X first
#define Y second
#define psb push_back
#define pob pop_back
#define SET( arr, val) memset(arr,val,sizeof(arr))
#define ITR iterator
#define SZ(arr) arr.size()
#define FOR( i, L, U ) for(int i=(int)L ; i<(int)U ; ++i )
#define FORI( i, L, U ) for(int i=(int)L ; i<=(int)U ; ++i )
#define FORD( i, U, L ) for(int i=(int)U ; i>=(int)L ; --i )
#define Tcases(t) int t;cin>>t;while(t--)

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

bool vis[101];
int cnt[101];
int n,m;

vi adj[101];

int ans=0;

void dfs(int u,int p){
	vis[u]=true;
	cnt[u]=1;
	for(int i:adj[u])
		if(i!=p){
			if(!vis[i])
				dfs(i,u);
			if(cnt[i]%2)
				cnt[u]+=cnt[i];
			else
				ans++;
		}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin>>n>>m;

	while(m--){
            int u,v;
		cin>>u>>v;
		--u,--v;
		adj[u].psb(v);
		adj[v].psb(u);
	}

	dfs(0,0);
	cout<<ans;

	return 0;
}
