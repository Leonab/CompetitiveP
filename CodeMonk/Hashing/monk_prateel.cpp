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

int main()
{
    int n;cin>>n;
    map<int,int> m;
    int c=0,ans=0;
    rep(i,n){
        int a;cin>>a;
        int output=a;
        int sum = 0;
        while(a) {
            sum+=a%10;
            a/=10;
        }
        output ^=sum;
        ans = max(ans,output);
        if(m.find(output)!=m.end()) {
            c++;
            m[output]++;
        }
        else {
            m[output]=1;
        }
    }
        if(c) {
            int counter = 0;
            auto it = m.begin();
            counter = it->second;
            ans = it->first;
            it++;

            for(;it!=m.end();it++) {
                if(it->second>counter) {
                    ans = it->first;
                    counter = it->second;
                }
                else if(it->second==counter) {
                    ans = min(ans,it->first);
                }
            }
        }
    cout<<ans<<" "<<c;
    return 0;
}
