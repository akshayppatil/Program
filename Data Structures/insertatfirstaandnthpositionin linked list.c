#include<stdio.h>
#include<malloc.h>
struct node
{
int x;
struct node *next;
};
struct node *start;
void insert(struct node **s,int n)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->x=n;
temp->next=NULL;
//struct node *a=*s;
if(*s==NULL)
*s=temp;
else
{
struct node *p=*s;
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
}}
void insertat(struct node **s,int pos,int value)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
struct node *a=*s;
temp->x=value;
for(int i=1;i<=pos-2;i++)
{
a=a->next;
}
temp->next=a->next;
a->next=temp;
}
void display(struct node *s)
{
struct node *a=s;
while(a!=NULL)
{
printf("%d\n",a->x);
a=a->next;
}
}
int main()
{
start=NULL;
insert(&start,1);
insert(&start,2);
//printf("%d\n",start->x);
insert(&start,3);
insertat(&start,3,9);
printf(" the start is %d",start->x);
display(start);
return 0;
}
