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
    map<char,ll> m;
    string s;cin>>s;
    ll n = s.size();
    int cnt[100005];
    for(ll i=0;i<n;i++) {
        m[s[i]] += 1;
        cnt[s[i]]++;
    }
    ll ans = 0;

    for(ll i=0;i<n;i++) {
        for(ll j=n-1;j>=i;j--) {
            string str="";
            for(ll k=i;k<=j;k++) {
                str[k] = s[k];
            }
            for(char c:str) {
                if(cnt[c]>=m[c] && m[c]>=1)
                    ans++;
            }
        }
    }
    cout<<ans;

    return 0;
}
