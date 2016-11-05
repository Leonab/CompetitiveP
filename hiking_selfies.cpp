#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int num = pow(2,n)-1;
    int ans = abs(x-num);
    cout<<ans;
return 0;
}
