#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
//#define mp make_pair
#define ll long long

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

map<char, int> mp;

int main()
{
    int q;cin>>q;
    string str = "hackerrank";
    for(char c:str)
        mp[c] += 1;
    while(q--) {
        string s = "";
        cin>>s;
        int flag = 0;
        int mappy[1000];
        for(char ch:s) {
            mappy[ch]++;
        }
        for(char c:str) {
        if(mp[c]<=mappy[c])
            continue;
        flag=1;
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
