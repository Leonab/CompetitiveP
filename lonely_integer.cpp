#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int findl(vi a, int n)
{
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if((a[i]^a[j])==0)
            {
                ans=a[j];
                break;
            }
            //else

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
