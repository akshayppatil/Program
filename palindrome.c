#include<stdio.h>
#include<string.h>
void pal(char *s, int n)
{
int l=0,r=n,flag=1;
while(l<r)
{
if(s[l]!=s[r])
{
flag=0;
}
l++;r--;
}
if(flag==0)
{
printf("NOT");
}
else
{
printf("YES");
}
}
int main()
{
char s[]="lol";
pal(s,2);
return 0;
}
