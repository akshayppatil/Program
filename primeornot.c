#include<stdio.h>
int main()
{
int c=0;
for(int n=1;n<=100;n++)
{
int count =0;
for(int i=2;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==1)
{
c++;
}

}
printf("%d\n",c);
return 0;
}
