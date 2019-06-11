#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
int num;long long int prod=1;
scanf("%d",&num);
if(num==0)
printf("1");
if(num<=20&&num>=1)
{
    for(int i=1;i<=num;i++)
    //printf("%d",i);
    prod*=i;
}
printf("%lld",prod);
}
