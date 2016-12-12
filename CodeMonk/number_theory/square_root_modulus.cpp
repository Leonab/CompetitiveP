#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long
#define li long int

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        li n,m;cin>>n>>m;
        int flag=0;
        for(li i=0;i<m;i++)
        {
            if(i*i%m==n)
            {
                cout<<i<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"-1"<<endl;
    }
    return 0;
}
