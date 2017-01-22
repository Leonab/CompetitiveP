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

int main()
{
    int n,m;cin>>n>>m;
    int a[n][m];
    ll d[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    memset(d,0,sizeof d);
    d[0][0] = a[0][0];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {

            if(i==0&&j==0)
            continue;

            if(i==0)
                d[i][j] = d[i][j-1] + a[i][j];
            else if(j==0)
                d[i][j] = d[i-1][j] + a[i][j];
            else
                d[i][j] = d[i-1][j] + d[i][j-1] + a[i][j] - d[i-1][j-1];
        }
    }
    ll q;cin>>q;
    while(q--) {
        int x,y;cin>>x>>y;
        cout<<d[x-1][y-1]<<endl;
    }

    return 0;
}
