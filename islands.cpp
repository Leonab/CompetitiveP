#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int n,m;

void fun(int a[MAX][MAX], int n, int m, int v[MAX][MAX],int x,int y)
{
    if(x>=n ||y>=m)
    return;
    int i,j;
    for(i=x-1;i<=x+1;i++)
    {
        if(i>=0 && i<n)
        for(j=y-1;j<=y+1;j++)
        {
            if(j>=0 && j<m && (i!=x || j!=y))
            if(v[i][j]==0 && a[i][j]==1)
            {
                v[i][j]=1;
                fun(a,n,m,v,i,j);
            }
            if(a[i][j]==0)
            v[i][j]=1;
        }
    }
}


int findIslands(int a[MAX][MAX],int n,int m)
{
    int i,j,x=0;
    int v[MAX][MAX] = {0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(v[i][j]==0 && a[i][j]==1)
            {
                v[i][j]=1;
                fun(a,n,m,v,i,j);
                x++;
            }
            if(a[i][j]==0)
            v[i][j]=1;
        }
    }
    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int a[MAX][MAX];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
          cin>>a[i][j];
    cout<<findIslands(a,n,m);
    }
    return 0;
}
