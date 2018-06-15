#include<stdio.h>
void rotate(int*a,int d,int n)
{
int temp,i;
while(d>0)
{
temp=a[0];
for(i=0;i<=n-2;i++)
{
a[i]=a[i+1];
}
a[i]=temp;
d--;
}

for(int j=0;j<6;j++)
{
printf("%d\n",a[j]);
}
}

int main()
{
int a[]={1,2,3,4,5,6};

rotate(a,2,6);
//for(int i=0;i<5;i++)
//{
//printf("%d\n",a[i]);
//}
return 0;
}
