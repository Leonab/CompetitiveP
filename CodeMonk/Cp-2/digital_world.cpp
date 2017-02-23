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
    string a,b;cin>>a>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
