#include<stdio.h>
int main()
{
int a[256]={0};
char s[]="eeeeFGGgggorss";
int i=0,j=0,sum=0;
while(s[i]!='\0')
{
a[s[i]]=s[i];
i++;
}
int k=0;
while(s[j]!='\0')
{
if(s[j]!=s[k+1])
{
sum=sum+a[s[j]];
}
j++;
k++;
}
printf("%d",sum);
}
