#include<stdio.h>


 int array(int a[], int len)
 {
     int count;int count1=0;
     int b[len];
     for(int i=0;i<len;i++)
     {
b[i]=a[i]/10;
         if(a[i]%10==7)
         {
             //b[i]=a[i]/10;
             if(b[i]%10==7)
             {
                 count=3;
             }
             else
             {
                 count=2;
             }
         }
  else
{
if(b[i]%10==7)
{
count=2;
}
else
{
             count=0;
         }
}
         count1=count1+count;
        
     }
     
 }
 int main()
 {
     int a[]={107,172, 32177, 17322};
     int len=sizeof(a)/sizeof(int);
     
     int p=array( a, len);
     printf("%d",p);
     
 }
