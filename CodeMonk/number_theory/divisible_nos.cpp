#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll a,b,c;
map <ll, ll> mp1,mp2;
const ll mod = 1e9+7;
ll expo(ll a, ll b)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
		{
			ans*=a;
			ans%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return ans;
}

void factor(ll a, int  p)
{

	if(p==0)
	{
		for(ll i=2;i*i<=a;i++)
		{
			if(a%i==0)
			{
				while(a%i==0)
				{
					mp1[i]++;
					a/=i;
				}
			}
		}
		if(a>1)
		{
			mp1[a]++;
		}
	}
	else
	{
		for(ll i=2;i*i<=a;i++)
		{
			if(a%i==0)
			{
				while(a%i==0)
				{
					mp2[i]++;
					a/=i;
				}
				mp2[i]*=c;
			}
		}
		if(a>1)
		{
			mp2[a]++;
			mp2[a]*=c;
		}
	}

}
int main()
{
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		mp1.clear();
		mp2.clear();
		cin>>a>>b>>c;
		factor(a,0);
		factor(b,1);
		for(map <ll,ll>::iterator it = mp2.begin(); it!=mp2.end();it++)
		{
			if(mp1[it->first])
			{
				if(mp1[it->first] <= it->second)
					mp2[it->first] = it->second - mp1[it->first];
				else
					mp2[it->first] = 0;


			}
		}
		ll sum=1;

		for(map <ll,ll>::iterator it = mp2.begin(); it!=mp2.end();it++)
		{
			ll tp = it->second;
			ll val = it->first%mod;
			if(tp>0)
			{
				ll ans = expo(val,tp);
				sum*=ans;
				sum%=mod;
			}
		}
		cout<<sum<<endl;


	}
	return 0;
}
