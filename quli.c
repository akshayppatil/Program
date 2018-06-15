#include<stdio.h>
#include<malloc.h>
struct node
{
int x;
struct node *next;
};
struct node *start;
struct node *rear;
void insert(struct node **s,struct node **rear,int value)
{
struct node *a=*s;
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->next=a;
temp->x=value;
if(*s==NULL)
{
*s=temp;
}
*rear=temp;
}
int delete(struct node **s,struct node **rear)
{
struct node *holder=*rear;
struct node *a=*s;
int p=a->x;
struct node *temp1;
while(holder!=a)
{
temp1=holder;
holder=holder->next;
}
temp1->next=a->next;
a=temp1;
return p;
free(holder);
}

void dis(struct node **s,struct node **rear)
{
//struct node *a=*s;
struct node *b=*rear;

while(b!=NULL)
{
printf("the value are %d\n",b->x);
b=b->next;
}
}
int main()
{
start=NULL;
rear=NULL;
 insert(&start,&rear,1);
insert(&start,&rear,2);
dis(&start,&rear);
int d=delete(&start,&rear);
//dis(&start,&rear);
printf("the deleted is %d\n",d);
dis(&start,&rear);
return 0;
}

