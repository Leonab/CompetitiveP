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
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
        ll sum=0,j=0;
        for(ll i=n-1;i>=0;i--) {
            if(a[i]>=j) {
                j=a[i];
                }
                sum+=j-a[i];
            }

        cout<<sum<<endl;

    }
    return 0;
}
