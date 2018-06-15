#include<stdio.h>
#include<malloc.h>
int main()
{
//char a[10];
char *a=(char*)malloc(sizeof(char)*1);
scanf("%s",a);
printf("%s",a);
return 0;
}

