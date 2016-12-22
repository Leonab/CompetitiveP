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

void finder(string a, int n)
{
    int i,j;

    for(i=n-1;i>=0;i--)
    {
        if(a[i]>a[i-1])
            break;
    }

    if(i==0)
        cout<<"error";
    int x=a[i-1],select=i;

    for(j=i+1;j<n;j++)
    {
        if(a[j]>x&&a[j]<a[select])
            select=j;
    }

    swap(a[i-1],a[select]);
    sort(a.begin()+i,a.end());

    cout<<a;
}

int main()
{
    string s;cin>>s;
    int n=s.size();
    finder(s,n);
    return 0;
}
