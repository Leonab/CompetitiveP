#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

        if((a[j]%k)>(a[j+1]%k))
        {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            //cout<<"aj="<<a[j];
        }
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}
