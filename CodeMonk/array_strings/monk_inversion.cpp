#include<bits/stdc++.h>
using namespace std;
int mat[1010][1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans = 0;
		for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++){
			cin>>mat[i][j];
			for(int i1=1; i1 <= i; i1++)
			for(int j1=1; j1 <= j; j1++)
				if(mat[i1][j1] > mat[i][j])ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
