#include<stdio.h>
#include<ctype.h>
#include<string.h>//comment
int main()
{
    int ele,loop,count=1;//rotate an arr with ele elements, loop no. of times
    int arr[10000];
    scanf("%d %d",&ele,&loop);
    for(int i=0;i<ele;i++)
    scanf("%d ",&arr[i]);
    while(count<=loop)
    {
        int temp=arr[ele-1];
        for(int j=ele-1;j>=0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
        count++;
    }
    for(int i=0;i<ele;i++)
    printf("%d ",arr[i]);
}
