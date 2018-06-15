#include<stdio.h>
int count[9]={0};
int main()
{
int a[9]={1,2,2,2,3,3,3,3,3,3,3};
int n=sizeof(a)/sizeof(a[0]);
printf("the length is %d\n",n);
hash(a);
//printf("the mst ocuur is %d\n",k);
return 0;
}

void hash(int *a)
{
int i=0;
while(i!=9)
{
count[a[i]]++;
i++;
}
int max=-1;
int j=0;
int k;
for(int j=0;j<=9;j++)
{
if(count[j]>=max)
{
max=count[j];
k=j;
}
}
printf("%d is repeate%d is time",k,max);

//printf("%d",count[2]);
//return 0;}
}
