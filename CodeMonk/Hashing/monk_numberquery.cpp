#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long

const int maxus = 2e5+5;
ll n,k,q,z=-1;
pair<ll,ll> pa[maxus];
ll a[maxus], par[maxus], en[maxus], ex[maxus], t=0;
vector<ll> v[maxus];

ll modulo(ll a, ll b) {
    ll ans =1;
    while(b) {
        if(b%2) {
            ans*=a;
            ans%=k;
        }
        a*=a;
        a%=k;
        b/=2;
    }
    return ans;
}

void dfs(int ua, ll va) {
    z= max(z,va);
    for(int i=0;i<v[ua].size();i++) {
        dfs(v[ua][i],va+1);
    }
}

void init(int ua, int va) {
    for(int i=0;i<v[ua].size();i++) {
        ll tz = ((a[v[ua][i]]%k)*modulo(10,va-1))%k;
        pa[v[ua][i]].first = (pa[ua].first + tz)%k;
        pa[v[ua][i]].second = va-1;
        init(v[ua][i],va-1);
    }
}

void ances(int r) {
    for(int i=0;i<v[r].size();i++) {
        en[v[r][i]] = ++t;
        ances(v[r][i]);
    }
    ex[r]= t;
}

int main()
{
    ll x,y;
    cin>>n>>k>>q;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    for(int i=1;i<n;i++) {
        cin>>x;
        par[i+1] = x;
        v[x].pb(i+1);
    }
    dfs(1,(ll)0);
    pa[1].first = ((a[1]%k)*(modulo(10,z)))%k;
    pa[1].second = z;

    init(1,z);
    en[1]=0;
    ances(1);
    for(int i=0;i<q;i++) {
        cin>>x>>y;
        if(x==1) {
            if(pa[y].first%k==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else {
            if(pa[y].second==0) {
                ll to = (pa[y].first-pa[par[x]].first +k)%k;
                if(to==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else {
                ll den = modulo(modulo(10,pa[y].second),k-2)%k;
                ll tp = ((pa[y].first*den)%k-(pa[par[x]].first*den)%k +k)%k;
                if(tp==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
