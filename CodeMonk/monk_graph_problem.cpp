#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

vi adj[100001];
bool visited[100001];
int cnt;

void dfs(int u) {
    visited[u] = 1;
    //cnt[u]=1;
    for(int i:adj[u]) {
        cnt++;
        if(!visited[i]) {
            dfs(i);
        }
    }
}

int main()
{
    int n,m;cin>>n>>m;
    memset(visited,0,sizeof visited);
    rep(i,m){
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int ma=-1;
    rep(i,n) {
        if(!visited[i]) {
            cnt=0;
            dfs(i);
            if(cnt/2>ma)
                ma=cnt/2;
        }
    }
    cout<<ma;
    return 0;
}
