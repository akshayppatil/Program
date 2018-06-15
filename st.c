#include<stdio.h>

int main() {
 char s[]="ak$hay";
 int k=1;
 int i=0;
 while(s)
 {
if(s[i]>='A'&&s[i]<='Z')
{
s[i]=s[i]+k;
}
if(s[i]>='a'&&s[i]<='z')
{
s[i]=s[i]+k;
}
i++;
}
printf("%s",s);
}



