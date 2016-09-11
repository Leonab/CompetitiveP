#include<bits/stdc++.h>
using namespace std;

void revere(string &str)
{
    int i,beg=0,endy=0;
    string a;
    int len=str.length();
    endy=len;
    for(i=len;i>=0;i--)
    {
        if(str[i]==' ' || i==0)
        {
           beg=i+1;
           if(i==0)
            beg=i;
           //if(str[i]==' '&&str[i-1]==' ')
           //beg=i;


        for(int j=beg;j<=endy;j++)
        {
            cout<<str[j];
        }
          endy=i;
        }

    }
}


int main()
{
    string str;
    getline(cin, str);
    revere(str);
    return 0;
}
