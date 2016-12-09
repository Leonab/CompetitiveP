#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    long x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    vector<long> k;
    for(int i=0;i<n;i++){
     k.push_back(ceil(sqrt(x[i]*x[i]+y[i]*y[i])));
    }
    sort(k.begin(),k.end());
    int q;cin>>q;
    while(q--)
    {
        long z;cin>>z;
        int count=-1;
        int i=0,j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(k[mid]-z<=0)
            {
                //count++;
                count=mid;
                i=mid+1;
            }
            else
                j=mid-1;
        }
        cout<<count+1<<endl;
    }

return 0;
}
