#include<stdio.h>
int fib(int n)
{
if(n==1) return 1;
if(n==2) return 1;
if(n>=3) 
{
fib(n-1)+fib(n-2);
}
printf("%d",fib(n));

}
int main()
{
int n=4;
int p=fib(n);
printf("the sq is %d",p);
return 0;
} 
