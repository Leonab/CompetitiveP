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

void swapc(string s1, string s2) {
    string temp = s1;
    s1 = s2;
    s2 = temp;
}

int main()
{
    int n;cin>>n;
    string s[n],bolo[n];
    rep(i,n) {
        cin>>s[i];
    }
    set<string> setty;
    repi(i,1,n) {
        repi(k,1,n) {
        if(s[k].size()<s[k-1].size()) {
            string temp = s[k];
            s[k] = s[k-1];
            s[k-1] = temp;
        }
        else if(s[k].size()==s[k-1].size()) {
            setty.insert(s[k]);
            setty.insert(s[k-1]);
            int j = k-1;
            for(auto it:setty) {
               s[j] = it;
               j++;
            }
            setty.clear();
        }
    }
    }
    rep(i,n) {
        cout<<s[i]<<endl;
    }

    return 0;
}
