#include<stdio.h>
int a[]={2,1,5};
int x;
int main()
{
//int a[]={2,1,5};

for(int i=0;i<3;i++)
{
 x=a[i];
for(int j=0;j<3;j--)
{
if(a[j]<x)
{
a[i]=a[j];
}
}
}
for(int i=0;i<3;i++)
{
printf("%d",a[i]);
}
return 0;
}
