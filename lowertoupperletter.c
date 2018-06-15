#include<stdio.h>
void cap(char *s,int i)
{
    s[i]=s[i]-32;
    
}
void sm(char *s,int i)
{
s[i]=s[i]+32;
}
int main() {
  char s[]="akShay patil";
  int i=0;
  while(s[i]!='\0')
  {

      if(i==0)
{
          cap(s,i);
      }
      if(s[i]=='\t'||s[i]=='\n'||s[i]==' ')
      {
          i++;
          {
           if('a'<=s[i]<='z')
          {
              cap(s,i);
          }
          }
}
else
{
if('a'<=s[i]<='z')
{
cap(s,i);
}
}
      
      i++;
 }
 
  
  printf("%s\n",s);
  return 0;
}
  
 

