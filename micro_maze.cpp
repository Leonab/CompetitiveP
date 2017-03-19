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

int visited[11][11],a[11][11];

bool dfs(int x, int y, int n, int m) {
    if(x==n && y==m)
        return true;
    if(x<0 || y<0)
        return false;
    if(x>n || y>m)
        return false;
    if(visited[x][y] = 1)
        return false;
    if(a[x][y]==0)
        return false;
    else
        return true;
    visited[x][y] = 1;
    if(dfs(x+1,y,n,m)==true)
        return true;
    if(dfs(x-1,y,n,m)==true)
        return true;
    if(dfs(x,y+1,n,m)==true)
        return true;
    if(dfs(x,y-1,n,m)==true)
        return true;

    return false;

}

int main()
{
    int n,m;cin>>n>>m;
    //int a[n][m];
    for(int i=0;i<n;i++) {
     for(int j=0;j<m;j++) {
      cin>>a[i][j];
     }
    }

    bool flag = dfs(0,0,n-1,m-1);
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
