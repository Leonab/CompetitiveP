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
    while(t--)
    {
        int n;cin>>n;
        long int a[n];
        //long int d[100000]={0};
        rep(i,n){
         cin>>a[i];
         //d[a[i]]++;
        }
        sort(a,a+n);
        int i=1,j=n;
        while(i<j)
        {
            if(a[i]!=a[0])
                break;
            i++;
        }
        if(i%2)
            cout<<"Lucky"<<endl;
        else
            cout<<"Unlucky"<<endl;
    }
    return 0;
}
