#include<bits/stdc++.h>
using namespace std;

long long int functn (long long int temp)
{
    long long int x=0;
    if(temp>=5)
    {
        x = temp/5;
        temp = temp%5;
    }
    if(temp>=2)
    {
        x += temp/2;
        temp = temp%2;
    }
    x += temp;
    return x;

}

int main()
{
    long long int T,N,i,j,min,sum,temp;
    cin>>T;
    while(T--)
    {
        min = 1000000;
        cin>>N;
        int A[N];
        for(i=0 ; i< N ; i++)
        {
            cin>>A[i];
            if(A[i]<min)
                min = A[i];
        }
        long long int sum[6];
        for(j=0 ; j<=5 ; j++)
        {
            sum[j]=0;
            for(i=0 ; i< N ; i++)
            {
                temp = abs(A[i] - (min-j));
                sum[j] = sum[j] + functn(temp);
            }
        }
        sort(sum,sum+6);
        cout<<sum[0]<<endl;
    }
    return 0;
}
