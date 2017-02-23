#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int main()
{
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        ll x,sum=0,sum1=0;

        rep(i,n) {
            cin>>x;
            sum+=x;
        }
        rep(i,n) {
            cin>>x;
            sum1+=x;
        }

        if(sum==sum1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
