#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
long long int num,rev=0,po=1;
scanf("%lld",&num);
while(num/po)
{
    int dig=(num/po)%10;
    rev=(rev*10)+dig;
    po*=10;
}
printf("%lld",rev);
}
