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
    string s;cin>>s;
    long int a[10005];
    memset(a,-1,sizeof a);
    int x = s.length();
    int counter=0;
    for(int i=0;i<x;i++) {
        a[s[i]]++;
        if(a[s[i]]>0)
            counter++;
    }
    cout<<counter;
    return 0;
}
