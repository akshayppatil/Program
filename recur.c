#include<stdio.h>
void print(int a)
{
if(a==1)return ;
print(a-1);
printf("%d\n",a);
}
int main()
{
int a=5;
print(a);
return 0;
}
