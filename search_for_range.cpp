#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(const vector<int> &A, int target) {
        int n = A.size();
        int i = 0, j = n - 1;
        vector<int> ret(2, -1);
        while (i < j)
        {
            int mid = (i + j) /2;
            if (A[mid] < target) i = mid + 1;
            else j = mid;
        }
        if (A[i]!=target) return ret;
        else ret[0] = i;

        j = n-1;
        while (i < j)
        {
            int mid = (i + j) /2 + 1;
            if (A[mid] > target) j = mid - 1;
            else i = mid;
        }
        ret[1] = j;
        return ret;
}


int main()
{
    vector<int> a;

    int n;cin>>n;
    while(n--){ int z;cin>>z; a.push_back(z);}
    int k;
    cin>>k;
    searchRange(a,k);
    return 0;
}
