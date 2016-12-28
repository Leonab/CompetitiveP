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

vector < pair <int, int > > adj[1005];
int dist[1005];
bool visited[1005];

void dijkstra(int x){
    memset(dist,INT_MAX,sizeof dist);

    multiset<ii> s;
    dist[x]=0;
    s.insert({x,0});

    while(!s.empty()){

    ii p=*s.begin();
    s.erase(s.begin());

    int z = p.first, w=p.second;
    cout<<w;
    if(visited[z]) continue;

    visited[z]=true;

    for(int i = 0; i < adj[z].size(); i++){
        int e = adj[z][i].first, w = adj[z][i].second;

        if(dist[z]+w<dist[e])
        {
            dist[e] = dist[z]+w;
            s.insert({e,dist[e]});
        }
    }
    }
}

/*void bfs(int u){
    visited[u]=true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        ii p = x.first;
        for(int i:adj[p].first){
            if(!visited[p][i])
            {
                visited[p][i]=true;
                q.push(i);
            }
        }cout<<p.second;
    }
}*/

int main()
{
    int n,m; cin>>n>>m;
    while(m--){
        int a,b,w;cin>>a>>b>>w;
        adj[a].pb(make_pair(b,w));
        adj[b].pb(make_pair(a,w));
    }
    dijkstra(1);
    memset(visited,0, sizeof visited);
    //bfs(1);
    return 0;
}
