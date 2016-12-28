#include<bits/stdc++.h>
using namespace std;

int solve1(int n,int k)
{
    int g1 = n%k ;
    int g2 = k - g1 ;
    int sz1 = n/k + 1 ;
    int sz2 = n/k ;
    int ret = g1*sz1*g2*sz2 + g1*(g1-1)*sz1*sz1/2 + g2*(g2-1)*sz2*sz2/2 ;
    return ret ;
}

int solve(int n,int e)
{
    int k,low = 1,high = n + 1 ;
    while(low + 1 < high)
    {
        int mid = low + (high - low)/2 ;
        k = solve1(n,mid) ;
        if(k < e)
            low = mid ;
        else
            high = mid ;
    }
    return high ;
}

int main()
{
    int i,j,n,k,T ;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        int ret = solve(n,k) ;
        cout<<ret<<endl;
    }
    return 0 ;
}
