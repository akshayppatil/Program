#include<stdio.h>
int main()
{
int c=23;int co=0;
for(int n=2;n<=23;n++)
{
if(c%n==0)
{
co++;
}
}
if(co==1)
printf("prime no");
else
printf("not");
return 0;
}
