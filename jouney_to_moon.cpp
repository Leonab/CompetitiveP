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

bool visited[100001];
int counter;
int N, I;
vvi pairs(100001);


int dfs(int u){
    visited[u]=true;
    counter++;
    for(int i:pairs[u]){
            if(!visited[i])
                dfs(i);
    }
    return counter;
}

int main()
{
    cin >> N >> I;

    for (int i = 0; i < I; ++i) {
        int a, b;
        cin >> a >> b;
        pairs[a].push_back(b);
        pairs[b].push_back(a);
    }

    long long result = 0;
    long long sum = 0;

    for(int i=0;i<=N;i++) {
        if(!visited[i]) {
            counter=0;
            int x = dfs(i);
            result += sum * x;
            sum += x;
        }
    }

    cout << result-N << endl;
    return 0;
}
