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
    int t;cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll i,j;
        ll num, result = 0;
        for(i = 0; i < n; i++)
        {
            cin >> num;
            if(i % 2 == 0)
            result = result ^ num;
        }
        if(n % 2 == 0)
        cout << "0" << endl;
        else
        cout << result << endl;
    }
    return 0;
}
