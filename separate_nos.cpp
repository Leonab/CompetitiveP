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

int main(){
    int q;
    cin >> q;
    while(q--) {
        string s;
        cin>>s;
        bool flag = 0;
        int x = s.length();
        repi(i,1,x) {
            if(s[i]-s[i-1]==1) {
                continue;
            }
        }
    }
    return 0;
}
