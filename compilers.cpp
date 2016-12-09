#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    char a[50][20]= {"int","float","break","long","char","for","if","switch","else","while",
                    "case","enum","register","typedef","extern","return","union","const","short",
                    "unsigned","continue","signed","void","default","goto","sizeof","volatile","do","static",
                    "malloc","calloc","exit"};
    char string[10];

    int j=1;
    while(j){
    int i=0,flag=0,flag1=0;
    printf("Enter a string :");
    gets(string);

    for(i=0; i<50; i++)
    {
        if((strcmp(a[i],string)==0))
            flag=1;
    }

    for(i=0; string[i]!='\0'; i++)
    {
        if(isdigit(string[i])==0)
        {
            flag1=1;
        }

    }

    if(flag==1)
        printf("\n%s is a keyword \n",string);
    else
    {
        flag=0;
        if((string[0]=='_')||(isalpha(string[0])!=0))
        {
            for(i=1; string[i]!='\0'; i++)
                if((isalnum(string[i])==0)&&(string[i]!='_'))
                    flag=1;

        }
        else
            flag=1;

        if( flag==0)
            printf("\n%s is an identifier \n",string);
        else if(flag1==0)
            printf("\n%s is a number \n",string);
        else
            printf("\n%s is neither a keyword nor an identifier \n",string);
    }
    }
    return 0;
}
