#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int* sort(int *a,int p)
{
for(int i=1;i<=p;i++)
{
int k=i;
for(int j=i-1;j>=0;j--)
{
if(a[k]<a[j])
{
swap(&a[k],&a[j]);
k--;
}
}
}
return a;
//for(int i=0;i<5;i++)
//printf("%d\n",a[i]);
}
int main()
{
int a[]={5,1,4,2,8};
int *p=sort(a,5);
for(int i=0;i<5;i++)
printf("%d\n",p[i]);
return 0;
}
