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
    string a;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int n=a.size(),flag=0;
        int i=0,j=n-1,count=0;
        while(i<=j)
        {
            if(a[i]==a[j])
            {
                //count++;
                if(i==j || i+1==j)
                    flag=1;
                i++;j--;
            }
            else
            {
                cout<<"NO\n";
                break;
            }
        }
        if(flag&&n%2==1)
            cout<<"YES ODD\n";
        if(flag&&n%2==0)
            cout<<"YES EVEN\n";
    }
    return 0;
}
