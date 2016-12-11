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

#define mod 1000000007

long int Exponentiation(long int x,long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return Exponentiation((x*x)%mod,n/2);
    else
        return (x*Exponentiation((x*x)%mod,(n-1)/2));

}

int GCD(long int A, long int B) {
    if(B==1)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{
    int t;cin>>t;
    while(t--){
        long int a,b,c;cin>>a>>b>>c;
        long int z=Exponentiation(b,c);
        int g = GCD(a,z);
        int k=(a * z) / g;
        cout<<k%mod<<endl;
    }
    return 0;
}
