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

vi circle[1001];

int main()
{
    int n;cin>>n;
    int a[n][2];
    ll score=0;
    rep(i,n) {
        int r,w;cin>>r>>w;
        a[i][o]=r,a[i][1]=w;
    }
    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            for(int k=1;k<n;k++) {
            if(j*j+k*k<=pow((a[i][o]-a[i-1][0]),2))

            }
        }
    }
    return 0;
}
