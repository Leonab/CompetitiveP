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

/*int dp[1501][1501];
int n;
string p,q;

int subDiff(int i, int j, int k) {

    int mx = 0,cnt=0;
    int *u = &i, *v = &j;
    int l=0;
    while(1) {
        if(*u+l>=n || *v+l>=n) {
            mx = max(mx,l);
            break;
        }

        if(p[*u+l]!=q[*v+l])
            cnt++;

        if(cnt>k) {
            mx = max(mx,l);
            while(p[*u]==q[*v])
                *u+=1,*v+=1,l--;
            cnt--;
            *u+=1,*v+=1;
        } else {
            l++;
        }
    }
    return mx;
}

int getDone(int k) {
    int high=0;
    for(int i=0;i<=n;i++) {
        high = max(high,max(subDiff(0,i,k),subDiff(i,0,k)));
    }
    return high;
}

int main()
{
    int t;cin>>t;
    while(t--) {
        int k;cin>>k;
        cin>>p>>q;
        n = p.size();
        //memset(dp,0,sizeof dp);
        cout<<getDone(k)<<endl;

    }
    return 0;
}


/*for(int i=0;i<=x;i++) {
            for(int j=0;j<=x;j++) {
                cout<<dp[i][j]<<' ';
            }cout<<endl;
        }cout<<endl;*/

/*    int mx=0;
        for(int i=1;i<=n;i++) {
             for(int j=1;j<=n;j++){
                if(p[i-1]==q[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                    mx = max(mx,dp[i][j]);
                }
                else {
                    if(dp[i-1][j-1]<=s)
                        dp[i][j] = s;
                }
            }
        }

    return mx;*/


#define MAX_SIZE 1500
int main(){
    int num_cases;
    int k;
    char string1[MAX_SIZE+1],string2[MAX_SIZE+1];
    char diff_array[MAX_SIZE][MAX_SIZE];
    int length;
    int i;

    scanf("%d",&num_cases);
    while(num_cases--){
        scanf("%d %s %s",&k,string1,string2);
        length=strlen(string1);


        int j;
        for(i=0;i<length;i++){
            for(j=0;j<length;j++)
                diff_array[i][j]=(string1[i]!=string2[j]);
        }

        int front_pointer,back_ptr1,back_ptr2,front_sum1,front_sum2,curr_max=-1;
        int back_sum1,back_sum2;
        for(i=0;i<length;i++){
            front_sum1=front_sum2=back_sum1=back_sum2=0;
            back_ptr1=back_ptr2=-1;
            for(front_pointer=0;front_pointer+i<length;front_pointer++){
                front_sum1+=diff_array[front_pointer][i+front_pointer];
                front_sum2+=diff_array[i+front_pointer][front_pointer];
                while(front_sum1-back_sum1>k){
                    back_ptr1++;
                    back_sum1+=diff_array[back_ptr1][i+back_ptr1];
                }
                while(front_sum2-back_sum2>k){
                    back_ptr2++;
                    back_sum2+=diff_array[i+back_ptr2][back_ptr2];
                }

                if(front_pointer-back_ptr1>curr_max)
                    curr_max=front_pointer-back_ptr1;
                if(front_pointer-back_ptr2>curr_max)
                    curr_max=front_pointer-back_ptr2;
            }
        }
        printf("%d\n",curr_max);
    }
    return 0;
}
