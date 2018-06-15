#include<stdio.h>
#include<string.h>
void reverse(char *a)
{
if(*a)
{
    reverse(a+1);
    printf("%c",*a);
}
}
int main() {
    
char *a="akshay";
reverse(a);
return 0;
}


