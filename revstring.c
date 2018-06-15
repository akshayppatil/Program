#include<stdio.h>

void rev(char **str)
{
if(**str)
{
rev(*str+1);
printf("%c",**str);
}
}
void main()
{
char a[]="akshay";
rev(&a);
return 0;
}
