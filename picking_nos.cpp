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
    int n,f[100]={0};cin>>n;
    int a[n],count=0;
    rep(i,n)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    for(int i=1;i<n;i++)
    {
        int counter=f[i]+f[i-1];
        if(counter>count)
            count=counter;
    }

    cout<<count;
    return 0;
}
