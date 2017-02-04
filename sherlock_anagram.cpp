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
    while(t--) {
        string s="";
        cin>>s;
        int n = s.size();
        int cnt=0;
        rep(i,n) {
            string str="";
            for(int j=0;j<n-i;j++) {
                string str2="";
                for(int k=i;k<=j;k++) {
                    str2.pb(s[k]);
                }
                if(str2.size()==str.size()) {
                    int sum1=0,sum2=0,siz = str2.size(),zz=0;
                    while(zz<siz) {
                        sum1+= str2[zz];
                        sum2+= str[zz];
                        zz++;
                    }
                    if(sum1==sum2)
                        cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
