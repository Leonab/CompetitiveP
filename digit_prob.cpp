#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k;
    string x;
    cin>>x>>k;

    if(x.size()>=k)
    {
     if(x[0]!='-')
       for(int i=0;i<k;i++)
       {
           if(x[i]=='9')
           {
               k++;
           }
           x[i]='9';
       }
        else
    for(int i=x.size();i>=x.size()-k;i--)
        x[i]='0';
    }

    else
    for(int i=0;i<x.size();i++)
        x[i]='9';
    cout<<x;

    return 0;}
