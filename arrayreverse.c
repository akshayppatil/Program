#include<stdio.h>
void rev(int *a,int n)
{
int s=0;
 int e=n-1;
while(s<e)
{
int temp=a[s];
a[s]=a[e];
a[e]=temp;
s++;
e--;
}
}
void print(int *a,int n)
{
for(int i=0;i<n;i++)
{
printf("array is %d\n",a[i]);
}
}
int main()
{
int a[]={10,20,30,40,50};
int size=sizeof(a)/sizeof(a[0]);
printf("%d\n",size);
rev(a,size);
print(a,size);
return 0;
}
