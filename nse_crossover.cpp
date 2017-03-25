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
    int n;cin>>n;
    double a[1005];
    double ltma[1005]={0},stma[1005]={0};
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        if(i>=2) {
            double sum1 = 0;
            for(int j=i;j>i-2;j--){
                sum1+= a[j];
            }
            stma[i] = (sum1/2);
        }
        if(i>=5) {
            double sum2 = 0;
            for(int j=i;j>i-5;j--){
                sum2+= a[j];
            }
            ltma[i] = sum2/5;
        }
    }
    for(int i=1;i<=n;i++) {
        if(stma[i-1]>ltma[i-1] && stma[i]<=ltma[i] && (ltma[i-1]!=0 && stma[i-1]!=0))
            printf("%d %.2f %.2f \n", i, stma[i], ltma[i]);
        if(stma[i-1]<ltma[i-1] && stma[i]>=ltma[i] && (stma[i-1]!=0 && ltma[i-1]!=0))
            printf("%d %.2f %.2f \n", i, stma[i], ltma[i]);
        if(stma[i-1]==ltma[i-1] && stma[i]!=ltma[i] && (stma[i-1]!=0 && ltma[i-1]!=0))
            printf("%d %.2f %.2f \n", i, stma[i], ltma[i]);
    }
    return 0;
}
