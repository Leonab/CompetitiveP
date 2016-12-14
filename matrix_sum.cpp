#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int a[n][m];
    long int d[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
    	cin>>a[i][j];
    }
    memset(d,0,sizeof(d));
    //d[0][0]=a[0][0];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
    	d[i][j]=d[i][j-1]+a[i][j];
    }
    int q;cin>>q;
    while(q--)
    {
    	int x,y;
    	cin>>x>>y;
    	cout<<d[x-1][y-1]<<endl;
    }
    return 0;
}
