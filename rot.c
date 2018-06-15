#include <stdio.h>

/* Function to print reverse of the passed string */
void reverse(int a)
{
   if (a<=0)
   return ;
else{
       reverse(a-1);
       printf("%d\n",a) ;
   }
}

/* Driver program to test above function */
int main()
{
   //char a[] = "Geeks for Geeks";
   reverse(5);
   return 0;
}
