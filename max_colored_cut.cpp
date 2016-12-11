#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair

#define MAX 100000


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int N[MAX],M[MAX];
double W[5000][5000];

vi adj[101];

int main()
{
    int n,m,c;
    cin>>n>>m>>c;
    //int a[i];
    rep(i,n)
      cin>>N[i];
    while(m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(v);
        W[u][v]=w;
    }
    while(adj)
    {cout<<adj[1].pop_back();}
    return 0;
}
