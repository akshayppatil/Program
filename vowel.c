#include<stdio.h>
int main()
{
int i=0;
int j=0;int k=0;
char b[10];
char s[]="shailesh";
while(s[i]!='\0')
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
b[j]=s[i];
j++;
}
i++;
}
//int k=0
while(b[k]!='\0')
{
printf("%c",b[k]);
k++;
}
printf("\n");
return 0;
}

