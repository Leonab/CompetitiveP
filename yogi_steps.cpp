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

int getInvCount(ll arr[], int n)
{
  int inv_count = 0, counter = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i+1; j < n; j++)
      if (arr[i] > arr[j])
        inv_count++;

  for(int i=n-1;i>1;i--)
    for(int j=i-1;j>0;j--)
      if(arr[i]<arr[j])
        counter++;

  return inv_count,counter;
}

int main()
{
    int n;cin>>n;
    ll a[n];
    rep(i,n) {
        cin>>a[i];
    }
    int steps,z=INT_MAX;
    steps,z=getInvCount(a,n);
    //z=n-steps;
    //cout<<z;
    cout<<min(z,steps);
    return 0;
}
