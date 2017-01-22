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

const int mod = 1e9+7;

int main()
{
    string s;
    getline(cin,s);
    ll x=s.length();
    ll sum=0;
    string temp="";
    for(ll i=0;i<=x;i++) {
        if(s[i]==' ' || i==s.size()) {
            ll f=1, temp_sum=0;
            //cout<<temp.size()<<endl;
            for(ll j=temp.size()-1;j>=0;j--) {
               temp_sum = (temp_sum + (temp[j]-'0')*f*(j+1))%mod;
               f = (f*10+1)%mod;
            }
            sum+= temp_sum;
            temp="";
            i++;
        }
        temp.pb(s[i]);
    }

    cout<<sum;
    return 0;
}
