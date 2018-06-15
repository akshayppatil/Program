#include<stdio.h>
#include<string.h>
char max(char *s,int n)
{
int count[256]={0};
int i;
for(i=0;i<n;i++)
{
count[s[i]]++;
}
char k;
char max;
int j=0;
int c=2;
while(s[j]!='\0')
{
if(c>0)
{
if(count[s[j]]==1)
{
max=s[j];
c--;
}
}
j++;
}
return max;
}
int main()
{
char s[]="geegsforgeeks";
int n=strlen(s);
char a=max(s,n);
printf("the max is %c\n",a);
return 0;
}
