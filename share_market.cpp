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
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        int w[n];
        int sum=0;
        rep(i,n) { cin>>w[i]; sum+=w[i]; }
        sort(w,w+n);
        int k;cin>>k;
        int x[k],c[k];
        rep(i,k) cin>>x[i];
        rep(i,k) cin>>c[i];

        rep(i,k) {
            if(sum<c[i])
                cout<<"NO"<<endl;
            else {
                int can=0,flag=0;
                for(int z=n-x[i]-1;z<=n;z++) {
                    can += w[z];
                    if(can>=c[i])
                    {
                        cout<<"YES"<<endl;
                        flag=1;
                        break;
                    }
                }
                if(!flag)
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
