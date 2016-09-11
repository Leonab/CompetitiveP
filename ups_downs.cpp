#include<bits/stdc++.h>
using namespace std;

void manage(vector<int> a, int n)
{
    int i,temp;
    for(i=0;i<n;i++)
    {
        if(a[i%2]>a[i])
        {
            temp = a[i%2];
            a[i%2]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int t,n;
    vector<int> a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        manage(a,n);
    }
    return 0;
}
