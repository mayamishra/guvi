#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 int arr[1000000];
 int size;int count[10]={0};
 scanf("%d",&size);
 for(int i=0;i<size;i++)
 {
     scanf("%d",&arr[i]);
     count[arr[i]]++;
     
     
 }
 for(int i=0;i<10;i++)
 {
     if(count[i]==1)
     printf("%d",i);
 }
}
