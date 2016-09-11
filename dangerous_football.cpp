#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin>>s;
 int len=s.length(),flag=0,cnt=0;
 for(int i=0;i<len;i++)
 {
     if(s[i]=='0'||s[i]=='1')
     {
         int j=i;
         if(s[i]==s[j])
         while(s[i]==s[j])
         {
             cnt++;
             j++;
         }
         else
            continue;
         if(cnt>=7)
         {
             flag=1;
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
