#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int findl(vi a, int n)
{
    int ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(a[i]^a[j])
            {
                ans=a[i];
                break;
            }
        }
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
