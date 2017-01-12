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

vector<ll> h[1001000];
ll p[1001000];

int main()
{
    p[0]=1;
    for(int i=1;i<=100000;i++)
        p[i] = p[i-1]*31;
    ll n;cin>>n;
    ll left=0, right=INT_MAX;
    for(ll i=1; i<=n;i++) {
        string str="";
        cin>>str;
        right=min(right,(ll)str.length());
        h[i].pb(0);
        for(ll j=0;j<str.length();j++) {
            h[i].pb(h[i].back()*31+(str[j]-'a'+1));
        }
    }
    ll ans = 0;
    while(left<=right) {
        ll mid = (left+right)/2;
        set<ll> setty[2];
        ll cur=0,prev=1;
        for(int i=1;i<=n;i++) {
            for(int j=mid; j<h[i].size();j++) {
                int k = j-mid;
                ll h1 = h[i][j]-(p[mid]*h[i][k]);

                if(i==1)
                    setty[cur].insert(h1);
                else {
                    if(setty[prev].find(h1)!=setty[prev].end())
                        setty[cur].insert(h1);
                }
            }
            setty[prev].clear();
            cur=1-cur;
            prev=1-prev;
        }
        if(setty[prev].size()) {
            left = mid+1;
            ans = mid;
        }
        else
            right = mid-1;
    }
    cout<<ans<<endl;

    return 0;
}
