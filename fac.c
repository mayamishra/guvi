#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 int n1,n2;
 scanf("%d %d",&n1,&n2);
 for(int i=n1;i<=n2*n1;i++)
 if(i%n1==0&&i%n2==0)
 {printf("%d",i);
 break;}
}
