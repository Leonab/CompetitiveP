#include<bits/stdc++.h>
using namespace std;

int myatoi(string &str)
{
    int res=0,i=0,sign=1;
    while(str[i]==' ')
    {
        i++;
    }
    if(str[i]=='-'||str[i]=='+')
        {
            sign = (str[i]=='-')?-1:1;
            i++;
        }
    while('0'<=str[i]&&str[i]<='9')
    {
        if(res>INT_MAX || (res==INT_MAX && str[i]-'0'>7))
        {
            if(sign==1)
                return INT_MAX;
            else if(sign==-1)
                return INT_MIN;
        }
        res = res*10 + str[i++]-'0';
    }
    return res*sign;
}

int main()
{
    string str;
    cin>>str;
    cout<<myatoi(str);
  return 0;
}
