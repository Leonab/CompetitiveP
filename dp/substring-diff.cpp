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

int dp[1501][1501];
int s;

int subDiff(string p, string q, int n) {
    int mx=0;
    for(int k=0;k<s;k++) {
        int cnt=0;
        for(int i=0;i<n;i++) {
             for(int j=0;j<n;j++){
                if(p[i+k]!=q[j+k])
                    dp[i][j] = 1;
            }
        }
        if(cnt>mx)
            mx=cnt;
    }
    return mx;
}

int main()
{
    int t;cin>>t;
    while(t--) {
        cin>>s;
        string p="",q="";
        cin>>p>>q;
        int x = p.size();
        memset(dp,0,sizeof dp);

        cout<<subDiff(p,q,x)<<endl;
        rep(i,x) {
            rep(j,x) {
                cout<<dp[i][j]<<' ';
            }cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
