#include<stdio.h>
#include<string.h>
char kth(char *str)
{
int arr[256]={0};
int l=strlen(str);
printf("%d\n",l);
int k=0;
for(int i=0;i<l;i++)
arr[str[i]]++;
for(int i=0;str[i]!='\0';i++)
{
if(arr[str[i]]==1)
{
k++;
}
if(k==5)
return str[i];

}
printf("no found\n");
}
int main()
{
char a[]="akaakfhi";
char p=kth(a);
printf("%c\n",p);
return 0;
}
