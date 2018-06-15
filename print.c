#include<stdio.h>
void print(int a)
{
if(a==11) return ;
printf("%d\n",a);
print(a+1);
}
int main()
{
int a=1;
print(a);
return 0;
}
