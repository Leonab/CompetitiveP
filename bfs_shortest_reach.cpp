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

vi adj[1001];
bool visited[1001];
int cnt[1001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    cnt[u]=0;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int i:adj[p])
        {
            if(!visited[i])
                {
                    q.push(i);
                    visited[i]=true;
                    cnt[i] = cnt[p]+1;
                }
        }
    }
}

int main()
{
    int q;cin>>q;
    while(q--){
        int n;long int m;cin>>n>>m;
		for (int i = 0; i < 1001; i++) {
			adj[i].clear();
		}
        memset(visited,0,sizeof(visited));
        memset(cnt,0,sizeof(cnt));
        rep(i,m){
            int u,v;cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        int s;cin>>s;
        bfs(s);
        for(int i=1;i<=n;i++){
            if(i==s)
            continue;
            if(visited[i]==1)
                cout<<cnt[i]*6<<" ";
            else
                cout<<-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
