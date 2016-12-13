#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b){
	if(b==0)
    return a;
    else
        return gcd(b,a%b);
}

ll d[200100]={0};
ll a[200100], f[200100]={0};

int main(){
	ll n;cin>>n;

	for(ll i=1; i<=n; i++){
        cin>>a[i];
		f[a[i]]++;
	}

	ll t;cin>>t;

	for(ll i=1; i<=200000; i++){
		for(ll j=i; j<=200000; j+=i){
                d[i]+=f[j];
		}
    }
    while(t--){
        ll p, q;cin>>p>>q;
		ll lcm = (p*q)/gcd(p,q);
		ll temp;

		if(lcm > 200000)
            temp = 0;

		else
            temp=d[lcm];

		cout<<d[p]+d[q]-temp<<endl;
    }
    return 0;
}
