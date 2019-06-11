#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str1[10000],str2[10000];
    int count=0;
    scanf("%s %s",str1,str2);
    if(strlen(str1)==strlen(str2))
    {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i]!=str2[i])
            count++;
        }
    }
    printf("%d",count);
}
