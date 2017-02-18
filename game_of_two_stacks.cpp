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
        vector<ll> a(n);
        for(ll a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<ll> b(m);
        for(ll b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }

        ll cnt = 0,sum = 0;
        ll i=0,j=0;
        while(sum + a[i]<=x || sum + b[j]<=x) {
            if(a[i]<=b[j]) {
                sum += a[i];
                i++;
            }
            else {
                sum += b[j];
                j++;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
