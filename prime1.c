#include<stdio.h>
int prime1(int n)
{
    int c=0;
    for(int j=2;j<=n;j++)
    {
        if(n%j==0)
        {
            c++;
        }
     }
        if(c==1)
        {
            return 1;
        }
    
}


void prime()
{ 
    int c=0,p;
    for(int i=1;i<100;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            
            }
        }
        if(c==1)
         {
            p=prime1((2*i)+1);
           
        if(p==1)
            
            printf("%d\n",i);
             
             
            }
} 
}    


int main() {
  
prime();
return 0;
}

