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

int n;
int maxSubarrayContiguous(int *arr) {
		int maxSoFar = arr[0];
		int currMax = arr[0];

		   for (int i = 1; i < n; i++) {
		        currMax = max(arr[i], currMax + arr[i]);
		        maxSoFar = max(maxSoFar, currMax);
		   }
		   return maxSoFar;
}

int maxSubarrayNonContiguous(int *arr) {
		int sumMax = 0;
		int ma = arr[0];
		bool negArray = true;
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] >= 0) {
				sumMax += arr[i];
				negArray = false;
			}
			if (arr[i] >= ma) {
                ma = arr[i];
            }
		}

		if (negArray == false)
			res = sumMax;

		if (negArray)
			res = ma;

		return res;

}


int main()
{
    int t;cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        rep(i,n) {
            cin>>a[i];
        }
        cout<<maxSubarrayContiguous(a)<<" "<<maxSubarrayNonContiguous(a)<<endl;
    }
    return 0;
}
