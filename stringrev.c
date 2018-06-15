#include<stdio.h>
void rev(char* s)
{
if(*s!='\0')
{
rev(s+1);
printf("%c",*(s));
}
}
int main()
{
char s[]="akshay";
rev(s);
return 0;
}

