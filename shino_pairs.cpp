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
    ll n;cin>>n;
    ll a[n];
    rep(i,n) cin>>a[i];
    //multiset<pair<ll,ll> > s;
    map<string,int> m;
    vi z;
    int cnt=0;
    for(ll i=0;i<n;i++) {

        for(ll j=i;j<n;j++) {

            for(ll k=i;k<=j;k++) {

                z.pb(a[k]);
            }
            if(z.size()>1) {
                sort(z.begin(),z.end());
                /*if(s.find(make_pair(z[z.size()-1],z[z.size()-2]))==s.end())
                s.insert(make_pair(z[z.size()-1],z[z.size()-2]));*/
                string str = to_string(z[z.size()-1]) + to_string(+ z[z.size()-2]);
                m[str] = 1;
            }
        } z.clear();
    }
    for(auto it:m)
        if(it.second == 1)
        cnt++;
        //cout<<it.first<<"  "<<it.second<<endl;
    cout<<cnt;
    return 0;
}
