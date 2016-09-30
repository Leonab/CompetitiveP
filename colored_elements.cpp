#include<bits/stdc++.h>
using namespace std;

int M,N;

void fillcolor(int m, int n, int a[m][n], int r, int c1, int c2)
{
    int i,j;
    for(i=c1;i<=c2;i++)
    {
        if(a[r][i])
            i++;
        a[r][i]=1;
    }
}

int counter(int a[M][N])
{
    int i,j,count=0;
    for(i=1;i<=M;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(a[i][j])
                count++;
        }
    }
    return count;
}

int main()
{
int Q;
cin>>M>>N>>Q;
int a[M][N];
while(Q--)
{
    int r,c1,c2;
    cin>>r>>c1>>c2;
    fillcolor(M,N,a,r,c1,c2);
}
cout<<counter(a);
return 0;
}
