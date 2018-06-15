#include<stdio.h>
#include<malloc.h>
struct node{
int x;
struct node *next;
};


struct node *start;
struct node *top;
int pop(struct node **s,struct node **top)
{
struct node *a;
struct node *holder;
holder=*top;
*top=holder->next;
int p=holder->x;
return p;
free(holder);
} 


void insertatfirst(struct node **s,struct node **top,int value)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->next=*top;
temp->x=value;
if(*s==NULL)
{
*s=temp;
*top=temp;
}
else
{
*top=temp;
}
}
void display(struct node *s,struct node *top)
{
struct node *a=top;
while(a!=NULL)
{
printf("the list is %d\n",a->x);
a=a->next;
}
}
int main()
{
start=NULL;
top=NULL;
insertatfirst(&start,&top,1);
insertatfirst(&start,&top,2);
insertatfirst(&start,&top,3);
int p=pop(&start,&top);
printf("popped is %d",p);
printf("start element is  %d\n",start->x);
display(start,top);
//temp1->next=NULL;

return 0;
}
