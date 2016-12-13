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
typedef unsigned long long int li;

int count_bit(li n)
{
    int counter=0;
    while(n)
    {
        n=n&(n-1);
        counter++;
    }
    return counter;
}

int main()
{
    int t;cin>>t;
    while(t--){
        li n;cin>>n;
        //int count=count_bit(n);
        if((count_bit(n-1))%2==0)
            cout<<"Richard"<<endl;
        else
            cout<<"Louise"<<endl;
    }
    return 0;
}
