#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    char d;
    int p,max_length=0;
    cin>>s>>d>>p;
    int a=s.size();
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i=0;i<a;i++)
    {
        int max_now=0;
        if(s[i]==d)
        {
            max_now++;
            for(int j=i;j<p;j++)
            if(s[j]==s[j+1])
            {
                max_now++;
            }
            else
                {
                    max_length = max_now;
                    break;
                }
            if(max_now>max_length)
                m.insert(make_pair(i,max_now));

        }

    }

    pair<int,int> max;
    for(int i=m.begin();i!=m.end();i++)
    {
        //it= m.find((k-a[i]));
        if(it>it+1)
            max=*it;

    }
    cout<<max.second;
    return 0;
}
