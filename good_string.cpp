#include<bits/stdc++.h>
using namespace std;

int getcount(string s, int m, int n)
{
    if(n<2)
        return -1;
    if(s[m]==s[n-1])
       return 0;
    if(n==3&&s[0]!=s[n])
        return -1;

    return 1+min(getcount(s,m+1,n),getcount(s,m,n-1));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int num = getcount(s,0,n);
        cout<<num<<endl;
    }
    return 0;
}
