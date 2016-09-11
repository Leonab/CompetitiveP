#include<bits/stdc++.h>
 using namespace std;

 string rle(string str)
 {
     int i=0,count;
     int n= str.length();
     char cur=str[0];
     string arr;
     while(i<n)
     {
         if(str[i++]==cur)
         {
             count++;
         }
         arr.push_back(cur);
         arr.push_back('0'+count) ;
         cur=str[i-1];
         i--;
     }
     return arr;
 }

 int main()
 {

     int t;
     cin>>t;
     string s;
     while(t--)
     {
          cin>>s;
          cout<<rle(s);
     }

     return 0;
 }
