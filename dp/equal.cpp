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

int n,a[10000];
int j=1,ways=0;

int findOps( int minny, int index ) {
    if( index < minny )
        return 0;
    if( index == minny ) {
        j++;
        return 1;
    }
    else
        ways = min( findOps( minny, a[j]-1 ), min( findOps( minny, a[j]-2 ), findOps( minny, a[j]-5 ) ) );

    return ways+1;
}

int main()
{
    int t;cin>>t;
    while( t-- ){
        cin>>n;
        rep(i,n){
            cin>>a[i];
        }
        sort(a,a+n);
        int minny = a[0];
        cout<<findOps( minny, a[j] );
    }
    return 0;
}
