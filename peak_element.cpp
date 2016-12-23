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
    int n;cin>>n;
    int a[n];
    rep(i,n)
    cin>>a[i];
    int i=0,j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1])
            {
                cout<<a[mid];
                break;
            }
        if(a[mid]<a[mid-1])
            j=mid-1;
        else
            i=mid+1;
    }
    return 0;
}
