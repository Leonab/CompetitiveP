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
typedef long int li;

long int a[1000][1000];
int n,m;

int main()
{
    cin>>n>>m;

    rep(i,n){
     rep(j,m){
      cin>>a[i][j];
     }
    }
    int v1,v2,v3,v4;cin>>v1>>v2>>v3>>v4;
    li d[n][m]=a;

    return 0;
}
