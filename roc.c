#include<stdio.h>
int pi(int *a,int l,int h)
{
int m=(l+h)/2;
if(h==l)return h;
if(h<l)return l;
if(a[m]<a[m-1]) return m;
if(a[m]>=a[l]&&a[m]>=a[h]) 
{
 pi(a,m+1,h);
}
else
{
pi(a,l,m-1);
}
}
int main()
{
int a[]={7,9,11,12,15};
int p=pi(a,0,4);
printf("%d\n",p);
return 0;
}
