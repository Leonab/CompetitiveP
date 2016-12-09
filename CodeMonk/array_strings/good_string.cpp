#include<bits/stdc++.h>
#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define repg(i,j,N) for((i)=(j);(i)<(N);(i)++)

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
#define sz(a) int((a).size())


int main()
{
    string s;
    cin>>s;
    int n=s.size(),max_count=0;
    rep(i,n){
        int count=0;
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      {
          //count++;
          int j=i;
          while(j<n)
          {
              if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
              {
                  count++;
                  j++;
              }
              else
                break;
          }
          i=j-1;

      }
      if(count>max_count)
        max_count=count;
    }
    cout<<max_count;
    return 0;
}
