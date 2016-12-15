#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int a[n][m];
    long int d[n+1][m+1];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
    	cin>>a[i][j];
    }
    memset(d,0,sizeof(d));
    //d[0][0]=a[0][0];

    d[1][1]=a[1][1];
    for(int i=1;i<=n;i++)
        d[0][i]=d[0][i-1]+a[0][i];
    for(int i=1;i<=m;i++)
        d[i][0]=d[i-1][0]+a[i][0];

   for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
    	d[i][j]=a[i][j]+d[i-1][j]+d[i][j-1]-d[i-1][j-1];
    }



    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
    {
        cout<<d[i][j]<<" ";
    }cout<<endl;}
    int q;cin>>q;
    while(q--)
    {
    	int x,y;
    	cin>>x>>y;
    	cout<<d[x][y]<<endl;
    }
    return 0;
}
