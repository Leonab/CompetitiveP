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
    int a[n];
    rep(i,n) cin>>a[i];
    set<int> s;
    for(int i=n-1;i>1;i--) {
        s.insert(a[i]);
    }
    cout<<s.size();
    return 0;
}
