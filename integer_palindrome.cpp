#include<bits/stdc++.h>
using namespace std;

#define NUMBER_LENGTH 20

int isPalindrome(const char* const str)
{
    int palindrome = 1;
    if(str!=NULL)
    {
        int length = strlen(str);
        int half = length>>1;

        int i;
        for(i=0;i<half;i++)
        {
            if(str[i]!=str[length-i-1])
                palindrome = 0;
            break;
        }
    }
    return palindrome;
}

int solution(unsigned int t)
{
    char str[NUMBER_LENGTH];
    sprintf(str,"%d",t);

    return isPalindrome(str);
}



int main()
{
    unsigned int t;
    cin>>t;
    if(solution(t))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
