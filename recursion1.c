#include<stdio.h>
int sum(int num)
{
if(num==0)
return num;
return num+sum(num-1);
}
int main()
{
int num;
printf("enter no.");
scanf("%d",&num);
int a=sum(num);
printf("sum id %d",a);
return 0;
}
