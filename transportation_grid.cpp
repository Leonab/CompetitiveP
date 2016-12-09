#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n,t;
    cin>>n>>t;
    vector<int> a;
    for(int i=1;i<n;i++)
    {
        int z;cin>>z;
        a.push_back(z);
    }
    bool flag=false;
    int pos=1;
    while(pos<n)
    {
        pos+=a[pos-1];
        if(pos==t)
        {
            flag=true;
            break;
        }
        if(pos>t)
            break;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
