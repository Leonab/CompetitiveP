#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int siz=a.size();
    int flag=0;
    for(int i=0;i<siz;i++)
    {
        int num=0;
        if(a[i]=='0')
        {

            for(int j=i;j<siz;j++)
            {
                if(a[j]=='0')
                {
                    num++;
            if(num>=7)
            {
                flag=1;
                break;
            }
                }
                else
                    break;
            }
        }

        if(a[i]=='1')
        {

            for(int j=i;j<siz;j++)
            {
                if(a[j]=='1')
                {
                    num++;
                    if(num>=7)
            {
                flag=1;
                break;
            }
                }
                else
                    break;
            }
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
