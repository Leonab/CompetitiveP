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

bool findBst(int a[], int n){

    stack<int> s;

    int root = INT_MIN;

    for(int i=0;i<n;i++){

        if(a[i]<root)
            return false;

        while(!s.empty()&&s.top()<a[i])
        {
            root = s.top();
            s.pop();
        }

        s.push(a[i]);
    }
    return true;
}

int main()
{
    int n;cin>>n;
    int a[n];
    rep(i,n){cin>>a[i];}
    if(findBst(a,n))
        cout<<"YES";
    else
        cout<<"Nakko Nakko";
    return 0;
}
