#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[10000];
    scanf("%s",str);
    int l=strlen(str);
    str[l]='.';
    printf("%s",str);
   // printf(".");
}
