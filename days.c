#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str1[10000];
    scanf("%s",str1);
    if(str1[0]=='S'||str1[0]=='s')
    printf("yes");
    else
    printf("no");
}
