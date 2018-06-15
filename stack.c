
#include <stdio.h>
#define max 5
struct stack 
{
    int top;
    int a[max];
}s1;
//void push(int *,int);
//int pop(int *);
//int isstackempty(int *);
//int isstackfull(int *);
//void display(int *);


int isstackempty(struct stack *s1)
     {
         if(s1->top==-1)
         return 1;
         else
         return 0;
     }
int isstackfull(struct stack *s1)
     {
         if(s1->top==(max-1))
         return 1;
         else
         return 0;
     }
void push(struct stack *s1,int value)
   {
       if(isstackfull(s1))
       return ;
       else
       {
           s1->top=(s1->top)+1;
           s1->a[s1->top]=value;
       }
       
   }
 int pop(struct stack *s1)
 {
     if(isstackempty(s1))
     return ;
     else{
         int k=s1->a[s1->top];
         s1->top=(s1->top)-1;
         return k;
     }
     
 }
 void display(struct stack *s1)
{
if(s1->top==-1)
{
printf("stack is emty");
}
    for( int i=s1->top;i>=0;i--)
    {
        printf(" the stasj is %d\n",s1->a[i]);
    }
}
int main()
{
struct stack *s=&s1;
   s->top=-1;
while(1)
{
int u,n,p;
printf("enete 1.pop\n 2.push\n 3.display");
scanf("%d",&u);
switch(u)
{
 case 1 : 
              p=pop(s);
          printf("the pop ele is %d",p);
break;
 case 2: printf("enter elem tp push");

           scanf("%d",&n);
            push(s,n);
break;
case 3 :display(s);
}
}
     
    
     //printf("stack is%d ",T);
    return 0;
}
 


