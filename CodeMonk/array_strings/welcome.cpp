#include<bits/stdc++.h>
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define repg(i,j,N) for((i)=(j);(i)<(N);(i)++)

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
#define sz(a) int((a).size())


int main()
{
    vi a,b;
    int n;
    cin>>n;
    rep(i,n)
    {
        int z;cin>>z;
        a.push_back(z);
    }
    rep(i,n)
    {
        int z;cin>>z;
        b.push_back(z);
    }
    rep(i,n)
    {
        a[i]=a[i]+b[i];
    }
    rep(i,n)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
