#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int main()
{
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        double a[n],c[n]={0};
        //memset(c,1,sizeof(c));
        //rep(i,n) cout<<c[i]<<" "<<endl;
        rep(i,n) cin>>a[i];

        rep(i,n) {
            rep(j,n) {
                if(a[i]<=a[j])
                    c[i]++;
            }
        }


        //double k=n+1;
        double sum=0.0;
        rep(i,n) {
            sum+=(n+1)/(c[i]+1);
        }
        //sum /= n+1;
        cout<<fixed<<setprecision(2)<<sum<<endl;

    }
    return 0;
}
