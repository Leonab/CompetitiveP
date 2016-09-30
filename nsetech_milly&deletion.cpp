#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int counter=0;

/*int answer(vi a, int x, int m, int n)
{
    int p,q,ans;

    //if(m>=n)
    //    return 0;

    for(int i=m;i<n;i++)
    {
        if(a[i]>=a[i+1])
            p=a[i];
    }
    for(int i=m;i<n;i++)
    {
        if(a[i]<=a[i+1])
            q=a[i];
    }

    if(p==q)
        return 0;
    if(q*x>=p)
        return 0;

    return min(answer(a,x,m+1,n),answer(a,x,m,n-1))+1;

}*/

int mini(vi arr, int l, int h)
{
    int mn = arr[l];
    for (int i=l+1; i<=h; i++)
       if (mn > arr[i])
         mn = arr[i];
    return mn;
}

int maxi(vi arr, int l, int h)
{
    int mx = arr[l];
    for (int i=l+1; i<=h; i++)
       if (mx < arr[i])
         mx = arr[i];
    return mx;
}


int answer(vi arr, int x, int n)
{
    int table[n][n], k, i, j, mn, mx;
    memset(table,0,sizeof(table));

    for (k = 0; k < n; ++k)
    {
        for (i = 0, j = k; j < n; ++i, ++j)
        {
            mn = mini(arr, i, j);
            mx = maxi(arr, i, j);
            if(x*mn >= mx)
                table[i][j]= 0;
            else
                table[i][j]= 1+min(table[i][j-1],table[i+1][j]);
        }
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return table[0][n-2];
}


int main()
{
    int t;
    cin>>t;
    vi a;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            int z;cin>>z;
            a.push_back(z);
        }

        cout<<answer(a,x,n)<<endl;
    }
return 0;
}
