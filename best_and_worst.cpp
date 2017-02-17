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
    int n;
    cin >> n;
    vector<ll> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    ll mx = score[0],mn=score[0];
    int mx1=0,mx2=0;
    repi(i,1,n) {
        if(score[i]>mx) {
            mx1++;
            mx = score[i];
        }
        if(score[i]<mn) {
            mx2++;
            mn = score[i];
        }
    }
    cout<<mx1<<' '<<mx2;
    return 0;
}
