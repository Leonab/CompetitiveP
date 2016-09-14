#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int findl(vi a, int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans^=a[i];
    }
    return ans;
}

int main()
{
    vi a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        a.push_back(d);
    }
    cout<<findl(a,n);

return 0;
}
