#include<bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int swapbits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
{
    unsigned int set1 =  (x >> p1) & ((1U << n) - 1);
    cout<<"set1 "<<set1<<endl;

    unsigned int set2 =  (x >> p2) & ((1U << n) - 1);
    cout<<"set2 "<<set2<<endl;

    unsigned int zor = (set1 ^ set2);
    cout<<"zor "<<zor<<endl;

    zor = (zor << p1) | (zor << p2);
    cout<<zor<<endl;

    unsigned int result = x ^ zor;

    return result;
}

int main()
{
    ui x,p1,p2,n;
    cin>>x>>p1>>p2>>n;
    cout<<swapbits(x,p1,p2,n);
    return 0;

}
