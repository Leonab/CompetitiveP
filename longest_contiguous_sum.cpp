#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int lcs(vi a)
{
    int max_sum=0;
    int max_ends_here=0;
    for(int i=0;i<9;i++)
    {
        max_ends_here+=a[i];
        if(max_ends_here<0)
            max_ends_here=0;
        else if(max_sum<max_ends_here)
            max_sum= max_ends_here;
    }
    return max_sum;
}

int main()
{
    vi a;
    for(int i=0;i<9;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    cout<<lcs(a);
    return 0;
}
