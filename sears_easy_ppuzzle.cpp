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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        bool flag = 0;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%k==0)
                flag=1;
            /*else
                flag=0;*/
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
