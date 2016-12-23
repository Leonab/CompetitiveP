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
    while(t--){
        int n;cin>>n;
        int a[n];
        rep(i,n){
         cin>>a[i];
        }
        int max_profit=0;
        vi b;
        rep(i,n){
         if(a[i]<a[i+1])
         {
             int j=i;
             while(a[j]<a[j+1])
             {
                 b.pb(a[j]);
                 j++;
             }
             //b.pb(a[i+1]);
             int m=b[b.size()-1],sum=0;
             //cout<<m;
             for(int k=0;k<b.size()-1;k++)
             {
                 sum+=m-b[k];
             }
             max_profit+=sum;
         }
        }
        cout<<max_profit;
    }
    return 0;
}
