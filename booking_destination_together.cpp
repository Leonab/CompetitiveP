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
    int n,m,c;cin>>n>>m>>c;
    ll fact[n+m+1];
    fact[0] = 1;
    repi(i,1,n+m+2) {
        fact[i] = fact[i-1] * i;
    }
    cout<<fact[n-c+m-1];

    return 0;
}
