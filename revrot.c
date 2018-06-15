#include<stdio.h>
void rev(int *a,int d,int n)
{
rot(a,0,d-1);
rot(a,d,n-1);
rot(a,0,n-1);
}
void rot(int *a,int s,int e)
{
int tmp;
while(s<e)
{
tmp=a[s];
a[s]=a[e];
a[e]=tmp;
s++;
e--;
}
}
void print(int *a)
{
for(int i=0;i<6;i++)
{
printf("%d\n",a[i]);
}
}
int main()
{
int a[]={1,2,3,4,5,6};
rev(a,2,6);
print(a);
return 0;
}

