#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
map<int,int> m;
map<int,int>::iterator it;
    vector<int> a;
    int n,k,flag=0;
    cin>>n;
    cin>>k;
    while(n--)
    {
        int z;
        cin>>z;
        a.push_back(z);
    }
    int siz = a.size();
    for(int i=0;i<siz;i++)
    {
        it=m.find(a[i]);

        if(it==m.end())
            m.insert(make_pair(a[i],1));
    }
    for(int i=0;i<siz;i++)
    {
        it= m.find((k-a[i]));

        if(it!=m.end())
        {
            //pair<int,int> p;
            //p = *it;
            //cout<<"1st="<<a[i]<<"2nd="<<p.first<<endl;
            flag=1;
            //return 0;
        }

    }
    if(flag)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}
