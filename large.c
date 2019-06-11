#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int n1,n2,n3;
    //comment
    scanf("%d %d %d",&n1,&n2,&n3);
    int max;
    max=n1;
    if(n2>max&&n3>max)
    {
        if(n2>n3)
        max=n2;
        else
        max=n3;
    }
  /*  if(n2<min&&n3<min)
    {
        if(n2<n3)
        min=n2;
        else
        min=n3;
    }*/
    printf("%d",max);
}
