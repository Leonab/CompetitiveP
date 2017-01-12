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
    string s,str;
    str="abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getline(cin,s);

    while(t--){
        getline(cin,s);
        vector<string> v;
        string cur = "";
        for(int i=0;i<s.size();i++) {
            if(s[i]==' ') {
                v.pb(cur);
                cur="";
            }
            else {
                cur+=s[i];
            }
        }
        v.pb(cur);
        ll ans=0;
        for(string a:v) {
            ll val = 0;
            for(int i=0;i<a.size();i++) {
                val+=1ll*i;
            for(int j=0;j<str.size();j++) {
                if(str[j]==a[i])
                    break;
                val++;
            }
            }
            ans+=val;
        }
        cout<<1ll*v.size()*ans<<endl;
    }
    return 0;
}
