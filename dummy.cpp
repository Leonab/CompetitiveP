#include<bits/stdc++.h>
using namespace std;

bool vis[101];
int cnt[101];
int n,m;

vector<int> adj[101];

int ans=0;

void dfs(int u, int p)
{
    vis[u]=true;
    cnt[u]=1;
    for(int i:adj[u])
    {
        if(i!=p)
        {
            if(!vis[i])
                dfs(i,u);
            if(cnt[i]%2)
                cnt[u]+=cnt[i];
            else
                ans++;
        }
    }
}

int main()
{
    cin>>m>>n;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        --u;--v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,0);
    cout<<ans;

    return 0;

}
