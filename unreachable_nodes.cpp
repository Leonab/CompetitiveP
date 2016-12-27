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

vi adj[10001];
bool visited[10001];

void dfs(int u){
    visited[u]=true;
    for(int i:adj[u])
    {
        if(!visited[i])
            dfs(i);
    }
}

int main()
{
    int n,m;cin>>n>>m;
    while(m--)
    {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int s;cin>>s;
    int counter=0;
    dfs(s);
    for(int i=1;i<=n;i++){
        if(!visited[i])
            counter++;
    }
    cout<<counter;
    return 0;
}
