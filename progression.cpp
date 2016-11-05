/*#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000009
typedef vector<int> vi;
int main()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        a.push_back(z);
    }

    int count=0;
    int sum=0;
    for(int i=0;i<n/2;i++)
    {
        multiset<int> s;
        for(int j=0;j<n;j++)
        {
            s.insert(a[i+j]);
        }
     sum+=s.size();
    }

    int sumo=0;
    for(int i=0;i<n;i++)
    {
        vi z;
        z.push_back(a[0]);
        for(int d=0;d<n;d++)
        {
            if(a[i]==(z[0]+(i-1)*d))
            z.push_back(a[i]);
        }
        a.erase(a.begin());
        if(z.size()>2)
            sumo++;
    }


    cout<<(n+sum+sumo+1)%MOD;
    return 0;
}
*/




#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> II;

const int N = (int) 2e5 + 10;
const int P = (int) 1e9 + 9;
int n, a[N], dp[N];

int main() {
    #ifdef LOCAL
        freopen("Data.inp", "r", stdin);
        freopen("Data.out", "w", stdout);
    #endif

    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);

    int ans = 1 + -200 * n + P;
    for (int d = -100; d <= 100; ++d) {
        memset(dp, 0, sizeof dp);
        for (int i = 1; i <= n; ++i) {
            int p = a[i] - d;
            if (1 <= p && p <= 100) dp[a[i]] = (dp[a[i]] + dp[p]) % P;
            dp[a[i]] = (dp[a[i]] + 1) % P;
        }
        for (int i = 1; i <= 100; ++i) ans = (dp[i] + ans) % P;
    }

    cout << ans;
    return 0;
}

