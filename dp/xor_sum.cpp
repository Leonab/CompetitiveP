#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long
ll mod = 1000000007;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

ll convertBinaryToDecimal(ll n)
{
    ll decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    ll a,b;cin>>a>>b;
    a=convertBinaryToDecimal(a);
    b=convertBinaryToDecimal(b);
    ll sum=0;
    for(ll i=0;i<314159;i++) {
        sum+=(a^(b<<i));
    }
    cout<<sum%mod;
    return 0;
}
