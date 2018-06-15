#include<stdio.h>
void cnd(int *a)
{
int i;
int arr[9]={0};
for(i=0;i<5;i++)
arr[a[i]]++;
int max=-1;
int result=0;
for(i=0;i<5;i++)
{
if(max<arr[i])
{
max=arr[i];
result=i;
}
}
printf("the no %d occur %d time ",result,arr[result]);
//return arr[result];

}
int main()
{
int a[5]={2,2,2,3,4};
cnd(a);
//printf("%d\n",p);
return 0;
}
