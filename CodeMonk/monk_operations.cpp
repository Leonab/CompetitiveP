#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	ll mat[1005][1005],val[10];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	for(int i=0;i<4;i++)
	{
		cin>>val[i];
	}
	ll rsum=0,rusum=0,risum=0,csum=0,cisum=0,cusum=0,matrsum=0,matcsum=0;
	for(int i=0;i<n;i++)
	{
		rsum=risum=rusum=0;
		for(int j=0;j<m;j++)
		{
			rsum+=abs(mat[i][j]);
			risum+=abs(mat[i][j]+val[0]);
			rusum+=abs(val[1]);
		}
		matrsum+=max(rsum,max(risum,rusum));
	}
	for(int j=0;j<m;j++)
	{
		csum=cisum=cusum=0;
		for(int i=0;i<n;i++)
		{
			csum+=abs(mat[i][j]);
			cisum+=abs(mat[i][j]+val[2]);
			cusum+=abs(val[3]);
		}
		matcsum+=max(csum,max(cisum,cusum));
	}
	cout<<max(matrsum,matcsum)<<"\n";
	return 0;
}
