#include<stdio.h>
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void art(int *a,int n,int d)
{
int k=n;
int i=d-1;

while(i>=0)
{
int m=i;
for(int j=m+1;j<=k-1;j++)
{
//printf("%d\n",k);
swap(&a[m],&a[j]);
m++;
//printf("%d\n",k);
}
i--;
k--;
//printf("%d\n",k);
}
}

int main()
{
int a[]={1,2,3,4,5};
art(a,5,2);
for(int i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
