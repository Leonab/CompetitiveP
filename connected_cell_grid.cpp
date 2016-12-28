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

/*int a[10][10],counter;
bool visited[10][10];
int n,m;


int dfs(int x, int y) {
        if (isValid(x, y) == false) {
            return 0;
        }

        int count = 1;
        int newX = x;
        int newY = y;
        visited[x][y] = 1;

        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                newX = x + i;
                newY = y + j;

                count = count + dfs(newX, newY);
            }
        }

        return count;
}

int main()
{
    cin>>n>>m;
    int a[n][m];
    rep(i,n){
        rep(j,m){
            cin>>a[i][j];
        }
    }
    memset(visited,0,sizeof visited);
    int maxus=0;
    rep(i,n){
        rep(j,m){
        if(!visited[i][j]){
            counter=0;
            int z = dfs(i,j);
            if(z>maxus)
                maxus=z;
        }}
    }
    cout<<maxus;
    return 0;
}*/

int arr[11][11];
int m = 0, n = 0;

int ff(int i, int j) {
    if (i < 0 || i >= m || j < 0 || j >= n || arr[i][j] == -1 || arr[i][j] == 1)
        return 0;
    else {
        arr[i][j] = 1;
        return 1 + ff(i+1, j) + ff(i-1, j) +
               ff(i, j+1) + ff(i, j-1) +
               ff(i+1, j-1) + ff(i-1, j+1) +
               ff(i+1, j+1) + ff(i-1, j-1);
    }
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            arr[i][j] = x-1;
        }
    }
    int mx = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == 0)
                mx = max(mx, ff(i, j));
        }
    }
    cout << mx;
    return 0;
}
