#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    int q;
    cin>>q;
    while(q--)
    {
        int pos1=-1,pos2=-1;
        double y;
        cin>>y;
        int j=m-1,i=0;
        while(j>=0&&i<n)
        {
            if(a[i][j]==y)
            {
                pos1=i;pos2=j;
                break;
            }
            if(a[i][j]>y)
                j--;
            else if(a[i][j]<y)
                i++;
            if(i<0 || j>=m)
                break;
            //else if(y>a[n-1][m-1] || y<a[0][0])
              //  break;
        }
        cout<<pos1<<" "<<pos2<<endl;
    }
    return 0;
}
