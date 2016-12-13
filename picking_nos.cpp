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
    int n;cin>>n;
    int a[n],count=0;
    rep(i,n)
    {
        cin>>a[i];
    }
    vi z;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-a[i+1])<=1)
        {
            z.pb(a[i]);
            z.pb(a[i+1]);
            for(int j=i+1;j<n;j++)
                if(abs(z[0]-a[j+1])<=1)
                 z.pb(j+1);
        }
    }
    cout<<z.size();
    return 0;
}
