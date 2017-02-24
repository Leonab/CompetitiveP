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

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        ll n,m,x;
        cin >> n >> m >> x;
        vector<ll> a(100000);
        for(ll a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<ll> b(100000);
        for(ll b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }

        ll i=0,j=0;
        ll sum = 0,ans;
        while(i<n && a[i]+sum<=x)
            sum += a[i++];

        ans = i;

        while(j<m && i>=0) {
            sum += b[j++];
            while(sum>x && i>0) {
                sum -= a[--i];
            }

            if(sum<=x && ans<i+j)
                ans = i+j;
        }

        cout<<ans<<endl;

    }
    return 0;
}
