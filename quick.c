#include<stdio.h>
void swap(int *a,int *b);
int pivot(int *a,int s,int e)
{
int i=s-1,p=a[e];
for(int j=s;j<e;j++)
{
if(a[j]<=p)
{
i++;
swap(&a[i],&a[j]);
}
}
swap(&a[i+1],&a[e]);
return (i+1);
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void quick(int *a,int s,int e)
{
if(s<e)
{
int p=pivot(a,s,e);
 quick(a,s,p-1);
quick(a,p+1,e);
}
}
void print(int *a)
{
for(int i=0;i<8;i++)
{
printf("%d\n",a[i]);
}
}
int main()
{
int a[]={3,5,4,1,8,9,2,7};
quick(a,0,7);
print(a);
return 0;
}

