#include<bits/stdc++.h>
using namespace std;

int j=1;
int my_sqrt(int a)
{
    int i,num=0,ans=0;


    for(i=1;i<=a;i++)
    {
        while(i*i<a)
            continue;
        if(i*i>=a)
            num=i;
    }
    cout<<num;
    ans=floor(a%num);

    if(!ans)
        return num,--j;
    else
        my_sqrt(ans);

    return ans;
}

int main()
{
    int a;
    cin>>a;
    cout<<my_sqrt(a);
    return 0;

}
