 #include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
long long l[MAX], r[MAX], A[MAX];

int main(){
    int n, q, idx;
    long long *it;
    long long x;
    cin >> n >> q;
    A[0] = 0;
    for(int i = 1;i <= n;++i)
    {
        cin >> l[i] >> r[i];
        A[i] = A[i-1] + (r[i] - l[i] + 1);
    }
    while(q--)
    {
        cin >> x;
        x--;
        it = lower_bound(A + 1, A + n + 1, x);
        idx = it - A;
        cout << (l[idx] + x - A[idx-1]) << endl;
    }

return 0;
}
