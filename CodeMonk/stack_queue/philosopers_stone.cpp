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
    int a[n];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    stack<int> b;
    //b.push(0);
    int q,x;
    cin>>q>>x;
    int i=1,sum=0;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="Harry")
        {
            b.push(a[i]);
            sum+=b.top();
            i++;
        if(sum>x)
        {
            cout<<b.size()-1;
            return 0;
        }

        }
        else if(s=="Remove")
        {
            sum-=b.top();
            b.pop();
            //i--;
        }
        if(sum>=x)
        {
            cout<<b.size();
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}
