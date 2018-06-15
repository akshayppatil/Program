#include<stdio.h>
int main()
{
int n;
printf("enter n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
a[i]=i+1;
}
for(int i=0;i<n;i++)
{
printf("val %d\n",a[i]);
}
return 0;
}

