#include<bits/stdc++.h>
using namespace std;

int Log2(int x)
{
    int ans = 0 ;
    while (x>>=1)
    {
        ans++;
        cout<<ans<<endl;
    }
    return ans ;
}

int main()
{
int x;
cin>>x;
cout<<Log2(x);
return 0;
}
