#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int counter=0;
        for(int i=1;i<1000;i++)
        {
            if(i^x==i+x)
                counter++;
        }
    cout<<counter<<endl;;
    }

    return 0;}
