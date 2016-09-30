#include<bits/stdc++.h>
using namespace std;


int main()
{
int M,N,Q;
cin>>M>>N>>Q;
int a[M][N];
    for(int i=1;i<=M;i++)
    {
        for(int j=1;j<=N;j++)
        {
            a[i][j]=0;
        }
    }
while(Q--)
{
    int r,c1,c2;
    cin>>r>>c1>>c2;

    for(int i=c1;i<=c2;i++)
    {
        if(a[r][i])
            i++;
        a[r][i]=1;
    }
}

    int i,j,count1=0;
    for(i=1;i<=M;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(a[i][j])
                count1++;
        }
    }

cout<<count1;
return 0;
}
