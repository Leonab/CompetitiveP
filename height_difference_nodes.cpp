#include <bits/stdc++.h>

using namespace std ;

vector<int> vec[1001] ;
int par[1001] ;
int lev[1001] ;
bool visit[1001];

void dfs(int x)
{
  stack<int> sp ;

  sp.push(x) ;

  while(!sp.empty())
  {
    int f = sp.top() ;

    if(!visit[f])
        visit[f] = true ;

      sp.pop() ;

      int sz = vec[f].size() ;

      for(int i = 0 ; i < sz ; i++)
      {
        int c = vec[f][i] ;

        if(!visit[c])
        {
          lev[c] = lev[par[c]] + 1 ;
          sp.push(c) ;
        }
      }
  }
}

int main()
{
  int N ;

  cin >> N ;

  for(int i = 1 ; i <= N - 1 ; i++)
  {
    int u , v ;

    cin >> u >> v ;

    par[v] = u ;

    vec[u].push_back(v) ;
    vec[v].push_back(u) ;
  }
  lev[1] = 0 ;

  dfs(1) ;

/*  7
1 2
1 5
2 3
3 7
5 4 */

// difference between any node can now be found by simply subtracting the lev[u] - lev[v]


  return 0 ;
}
