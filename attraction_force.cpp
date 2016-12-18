/*Attraction Force*/

#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int main()
{
    int n;cin>>n;
    map<int,int> m;
    map<int,int>::iterator it;
    while(n--)
    {
        int x,y;cin>>x>>y;
        m.insert(mp(x,y));
    }
    rep(i,n*(n-1))
    {
        for(it=m.begin();it!=m.end();++it)
        {
            /*int av = it->first;
            int pos = it->second;*/
            //cout<<(*it+1)->first<<'\n';
            cout<<(*it).first;
        }
    }
    return 0;
}
