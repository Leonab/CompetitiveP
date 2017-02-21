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

        ll suma[100000],sumb[100000];
        suma[0] = a[0], sumb[0] = b[0];
        for(ll i=1;i<n;i++)
            suma[i] = suma[i-1] + a[i];
        for(ll j=1;j<m;j++)
            sumb[j] = sumb[j-1] + b[j];
        ll ans,mx=0;

        for(ll i=0;i<n;i++) {
            ll zum = x - suma[i];
            ll ans2 = 0;
            if(zum>0) {
            ll beg = 0, en = m-1;
            while(beg<en) {
                ll mid = (beg+en)/2;
                if(sumb[mid]<=zum) {
                    //cout<<sumb[mid]<<' '<<endl;
                    ans2 = mid;
                    en = mid-1;
                }
                else
                    beg = mid+1;
            }
            /*for(ll j=0;j<m;j++) {
                if(sumb[j]<=zum) {
                    ans2=j;
                }
                else
                    break;
            }*/
            }
            else
                continue;
            ans = i + ans2 + 2;
            //cout<<ans2<<' '<<i<<endl;
            if(ans>mx)
                mx = ans;
        }
        cout<<mx<<endl;
    }
    return 0;
}
