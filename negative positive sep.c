#include<stdio.h>

int main() {
    int k=0;
int b[5];
   int a[]={1,-2,3,5,-8,9};
   for(int i=0;i<6;i++)
   {
       if(a[i]>0)
       {
       b[k]=a[i];
       k++;
       }
       
   }
    for(int i=0;i<6;i++)
   {
       if(a[i]<0)
       {
       b[k]=a[i];
       k++;
       }
       
   }
for(int i=0;i<6;i++)
{
    printf("%d\n",b[i]);
}
return 0;
}


