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

int maxXor(int l, int r) {
    int mx=-1, current= 0;
for (int i=l; i <= r; ++i)
    {
    for (int j = i; j <= r; ++j)
        {
        current = i xor j;
        if (current > mx) mx = current;
    }
}
return mx;
}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}
