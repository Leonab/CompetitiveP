//#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
unordered_map <string, int> binMap;
string test,sz;
getline(cin,test);
int i=0,j=0;
string temp,rev;
string::iterator it;
cout<<"{";

for(i = 0, it = test.begin() ; it <= test.end(); ++it)
    {

        if(*it==' ' || it==test.end())
        {
            temp=test.substr(j,i-j);
            rev=string(temp.rbegin(), temp.rend());
            if(binMap[rev]==1)
            cout<<"( "<<rev<<","<<temp<<" )";
            else
            binMap[temp]=1;
            j=i+1;
        }
        i++;
    }
cout<<"}";
return 0;
}
