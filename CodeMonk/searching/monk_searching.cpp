#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[100100];
	for(int i=1; i<=n; i++)cin>>a[i];
	sort(a+1, a+1+n);
	int q;cin>>q;
	while(q--){
		int type;
		int x;
		cin>>type>>x;
		if(!type)cout<<(n-((int)(lower_bound(a+1, a+n+1, x)-a-1)))<<endl;
		else cout<<(n-((int)(upper_bound(a+1, a+n+1, x)-a-1)))<<endl;
	}
	return 0;
}
