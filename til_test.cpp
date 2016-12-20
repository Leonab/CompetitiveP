#include<bits/stdc++.h>
using namespace std;

char** amount_value(int input1,char* input2[])
{
	int sum=INT_MAX,n=input1,minny;
	vector<int> ai;
	char** a = input2;
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            minny=min(a[i-1][j-1],a[i-1][j],a[i][j-1],a[i+1][j],a[i][j+1],a[i+1][j-1],a[i-1][j+1],a[i+1][j+1]);
            if(minny<sum)
            {
                sum=minny;
            }
        }
    }
    int summy;
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            summy=min(a[i-1][j-1],a[i-1][j],a[i][j-1],a[i+1][j],a[i][j+1],a[i+1][j-1],a[i-1][j+1],a[i+1][j+1]);
            if(summy==minny)
            {
                ai.push_back(i);
                ai.push_back('#');
                ai.push_back(j);
            }
        }
    }
    for(int i=0;i<ai.size();i++)
    {
        input2[i]=ai[i];
    }
    return input2;
}

int main()
{
    return 0;
}
