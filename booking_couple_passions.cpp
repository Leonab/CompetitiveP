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
    int n,m;cin>>n;
    string pass[256][256];
    map<string,int> mp;
    rep(i,n) {
        cin>>m;
        rep(j,m) {
            cin>>pass[i][j];
            mp[pass[i][j]] = 1;
        }
    }
    int y;cin>>y;
    multiset<pair<int,string> > storage;
    rep(i,y) {
        string dest="";
        cin>>dest;
        float lat,lng;cin>>lat>>lng;
        int z;cin>>z;
        int counter = 0;
        rep(j,z) {
            string pass2="";
            cin>>pass2;

            rep(l,n) {
            rep(k,m) {
                if(mp[pass[l][k]]==1)
                if(pass2==pass[l][k])
                    counter++,mp[pass[l][k]] += 1;
                    //cout<<pass[l][k]<<' ';

            }
            }
        }
        storage.insert({counter,dest});
    }
    for(auto it:storage) {
            cout<<"{"<<it.first<<","<<it.second<<"} ";
    }cout<<endl;
    int k = 0;
    set<string> setty;
    for(auto it:storage) {
        cout<<it.second<<' ';
    }
    return 0;
}
