#include<bits/stdc++.h>
using namespace std;

void dine(int n,int start, int last)
{
    int i,a,b,num=1,bum=1,yo,dum=1,sum=0,m;
    yo=last-start;
    //if(last==start)
    m=n;
    while(m)
    {
        m=m/10;
        sum++;
    }

    for(i=1;i<=sum-last;i++)
    {
        num=num*10;
    }
    for(i=0;i<=sum-start;i++)
    {
        bum=bum*10;
    }
    for(i=0;i<=yo;i++)
    {
        dum=dum*10;
    }
    b = n/num;
    a = (n/bum)*dum;
    if(start==1)
        a=0;
    int c=b-a;
    cout<<"\nc="<<c;
    if(c%7==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
    int n,q;
    cin>>n;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        dine(n,l,r);
    }
    return 0;
}
