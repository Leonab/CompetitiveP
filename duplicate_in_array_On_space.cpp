#include <bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &V) {
        if (V.size() <= 1)
            return -1;
        int valueRange = V.size() - 1;
        int range = sqrt(valueRange);
        if (range * range < valueRange)
            range++;
        int count[range + 1];
        memset(count, 0, sizeof(count));

        for (int i = 0; i < V.size(); i++) {
                count[(V[i] - 1) / range]++;
        }

        int repeatingRange = -1;
        int numRanges = ((valueRange - 1) / range) + 1;
        for (int i = 0; i < numRanges && repeatingRange == -1; i++) {
                if (i < numRanges - 1 || valueRange % range == 0) {
                    if (count[i] > range)
                        repeatingRange = i;
                    }
                else {
                        if (count[i] > valueRange % range)
                        repeatingRange = i;
                }
        }
        if (repeatingRange == -1)
            return -1;
        memset(count, 0, sizeof(count));

        for (int i = 0; i < V.size(); i++) {
            if ((V[i] - 1) / range == repeatingRange)
                count[(V[i] - 1) % range]++;
        }
        for (int i = 0; i < range; i++) {
            if (count[i] > 1) {
                return repeatingRange * range + i + 1;
            }
        }

        return -1;
    }


int main()
{
    vector<int> a;
    int n;cin>>n;
    while(n--)
    {
        int z;cin>>z;
        a.push_back(z);
    }
    cout<<repeatedNumber(a);
    return 0;
}


/*=============Elegant(How does it work??)
int repeatedNumber(const int* A, int n1) {
    long long x=0;
    int i;
    for(i=1;i<=n1-1;i++)
    x=x^i;
    for(i=0;i<n1;i++)
    x=x^A[i];
    return x;
}
*/
