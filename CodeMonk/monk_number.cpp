#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		map<ll,ll> m;
		for(int i=1; i<=n; i++){
			ll temp;cin>>temp;
			for(int j=2; j<=sqrt(temp); j++){
				ll cnt = 0;
				while(temp%j == 0){
					temp/=j;
					cnt++;
				}
				if(cnt)
                    m[j]+=cnt;
			}
			if(temp != 1)
				m[temp]++;
		}
		long long ans = 1;
		for(auto it:m){
			long long pw = 1;
			int sum = 0;
			for(int i=it.second+1; i>=1; i--){
				sum = (sum + ((long long)i*(long long)pw)%MOD)%MOD;
				pw = ((long long)pw*(long long)it.first)%MOD;
			}
			ans = (ans*sum)%MOD;
		}
		cout<<ans<<endl;
	}
}
