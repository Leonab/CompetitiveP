#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define diff_size 100000
using namespace std;

int myprime[diff_size];
int cnt;

void populate(int N)
{
    int i=0,j=0;
    bool primearray[diff_size];
    for(i=2;i<diff_size;i++)
    {
        primearray[i]=true;
        myprime[i]=0;
    }
    int myrange = floor(sqrt((double)N));

    int k = floor(sqrt((double)myrange));
    for(i=2;i<=k;i++)
    {
        if(primearray[i]==true)
        {
            for(j=i*i;j<=myrange;j++)
            {
                primearray[j]=false;
            }
        }
    }
    cnt=0;
    for(i=2;i<myrange;i++)
    {
        if(primearray[i]== true)
        {
            myprime[cnt++]=i;
        }
    }
    cout<<endl;
}



int main()
{
    int t;
    scanf("%d",&t);
    int i,p=0,s,N,M;

    bool primeNow[diff_size];

    while(t--)
    {
        scanf("%d%D",&M,&N);

        for(i=0;i<diff_size;i++)
        {
            primeNow[i]=true;
        }
        populate(N);
        for(i=0;i<cnt;i++)
        {
            p=myprime[i];
            s=M/p;
            s=s*p;
            for(int j=s;j<=N;j++)
            {
                if(j<M)
                    continue;
                primeNow[j-M]=false;
            }
        }
        for(int i=0;i<cnt;i++)
        {
            if(myprime[i]>=M&&myprime[i]<=N)
            {
                cout<<myprime[i]<<'\n';
            }
        }
        for(int i=0;i<N-M+1;i++)
        {
            if(primeNow[i]==true && (i+M)!=1)
                cout<<i+M<<endl;
        }
    }
    return 0;
}
