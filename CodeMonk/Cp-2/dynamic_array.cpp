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
    int n,q,t,l,r,x;
    cin>>n>>q;
    vi v,lis;
    vector<ii> upd;
    for(int i=1;i<=n;i++) {
        cin>>x;
        v.pb(x);
        if(lis.size()==0 || lis.back()<x) {
            lis.pb(x);
            upd.pb({-1,x});
        }
        else {
            int j = lower_bound(lis.begin(),lis.end(),x) - lis.begin();
            upd.pb({j,lis[j]});
            lis[j] = x;
        }

    }
    while(q--) {
        cin>>t;
        if(t==1) {
            cin>>x;
            v.pb(x);
            if(lis.size()==0 || lis.back()<x) {
                lis.pb(x);
                upd.pb({-1,x});
            }
            else {
                int j = lower_bound(lis.begin(),lis.end(),x) - lis.begin();
                upd.pb({j,lis[j]});
                lis[j] = x;
            }
        }
        else if(t==2) {
            v.pop_back();
            int j = upd.back().first;
            int val = upd.back().second;
            upd.pop_back();
            if(j!=-1)
                lis[j] = val;
            else
                lis.pop_back();
        }
        cout<<lis.size()<<endl;
    }
    return 0;
}
