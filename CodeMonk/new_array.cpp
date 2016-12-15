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

int main()
{
    int n,m;cin>>n>>m;
    long int mat[n][m];
    rep(i,n)
    {
        rep(j,m)
        {
            cin>>mat[i][j];
        }
    sort(mat[i],mat[i]+m);
    }


    int diff = INT_MAX;
    vector<long int> b;
    rep(i,n)
    {
        rep(j,m)
        {
            if(mat[i][j+1]-mat[i][j]<=diff)
                {
                    diff=mat[i][j+1]-mat[i][j];
                    b.pb(mat[i][j+1]);
                }
        }
    }
    int z=b.size();
    diff = INT_MAX;
    rep(i,z)
    {
        cout<<b[i];
        if(b[i+1]-b[i]<diff)
            diff=b[i+1]-b[i];
    }
    cout<<diff;


    return 0;
}
