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
{ int m,p;
int data[251];
 cin>>m>>p;
 int start=0,end=0;
 for(int i=1;i<=p;i++)
 { cin>>data[i];
  start=max(start,data[i]);
 }
 int ans=0;
 end=26*1e5;
 while(start<=end)
 { int mid=(start+end)/2;
  int i=1;
  int cur=0;
  int cnt=1;
  while(i<=p)
  { if(cur+data[i]<=mid)
   { cur+=data[i];i++;
   }
   else
   { cur=0;
    cnt++;
   }
  }
  if(cnt<=m)
  { ans=mid;
   end=mid-1;
  }
  else start=mid+1;
 }
 cout<<ans<<endl;
}
