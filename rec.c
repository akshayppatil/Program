#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
char temp=*a;
*b=temp;
*a=*b;
}
int main()
{
char a[]="Ab,c,de!$";
int i=0,j=strlen(a);
while(i<j)
{
if(97<=a[i]<=122||65<=a[i]<=91)
{
     if(97<=a[j]<=122||65<=a[j]<=91)
      {
          swap(&a[i],&a[j]);
            i++;j--;
       }
      else{
             i++;j--;
        }
}
else{
i++;

}}
int k=0;

while(a[k]!='\0')
{
printf("%c",a[k]);
k++;
}
return 0;
}


