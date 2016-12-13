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
    long int a[n][m];
    rep(i,n)
    {
        rep(j,m)
        {
            cin>>a[i][j];
        }
        //sort(a,a+m);
    }
    vector<long int> b;
    rep(i,n)
    {
        b.pb(a[i][0]);
    }
    int diff=0;
    for(int i=0;i<b.size();i++)
    {
        diff-=b[i];
    }
    cout<<diff;
    return 0;
}
