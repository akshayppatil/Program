#include<stdio.h>
int count(char *s)
{
int res=0;
for(int i=0;i<5;i++)
{
if(i==s[i]-'a'||i==s[i]-'A')
res++;
}
return res;
}
int main()
{
char s[]="ABcED";
int p=count(s);
printf("size id %d",p);
return 0;
}
