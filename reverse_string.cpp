#include<bits/stdc++.h>
using namespace std;

void reversal(string *str)
{
    char *temp = str;
    char *word_begin = NULL;
    while(*temp)
    {
        if (( word_begin == NULL ) && (*temp != ' ') )
        {
            word_begin=temp;
        }
        if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
        {
            reverse(word_begin,temp);
            word_begin=NULL;
        }
        temp++;
    }
    reverse(str,temp-1);
}

int main()
{
    string str;
    cin>>str;
    reversal(str);
return 0;
}
