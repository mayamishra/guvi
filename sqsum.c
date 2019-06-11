#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
   long long int num,po=1,sum=0;
   scanf("%lld",&num);
   while(num/po)
   {
       int dig=(num/po)%10;
       sum+=(dig*dig);
       po=po*10;
   }
 printf("%lld",sum);
}
