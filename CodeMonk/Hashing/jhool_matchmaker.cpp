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

map<char, int> m;

int main()
{
    int t;cin>>t;
    string s = "litejho";
    for(char i:s)
        m[i]=1;
    while(t--) {
        multiset< pair<int,pair<int,string> > > ans;
        int n,k;
        cin>>n>>k;
        rep(k,n) {
            string a;
            cin>>a;
            set<char> setty;
            for(int i=0;i<a.size();i++) {
                if(a[i]<='z'&&a[i]>='a')
                    setty.insert(a[i]);
                else if(a[i]<='Z'&&a[i]>='A')
                    setty.insert(tolower(a[i]));
            }
            int counter=0;
            for(char i:setty)
                counter+=m[i];
            ans.insert({counter,{k,a}});
        }
        for(auto it:ans) {
            cout<<it.first<<" {"<<it.second.first<<","<<it.second.second<<"} ";
        }cout<<endl;
        for(auto it:ans) {
            if(k==0)
                continue;
            cout<<it.second.second<<" ";
            k--;
        }
        cout<<'\n';
    }
    return 0;
}
