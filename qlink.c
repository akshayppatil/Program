#include<stdio.h>
//#include<conio.h>
#include<malloc.h>
//void push(struct q *,int );
//void display(struct q *);
int main()
{
struct q *start;
start->f=NULL;start->r=NULL;
push(start,1);
push(start,2);
display(start);
return 0;
}
struct  q
{

int data;
struct q *next,*f,*r;
};
void push(struct q *s,int e)
{
struct q *temp=(struct q *)(malloc(sizeof(struct q)));
temp->data=e;
temp->next=NULL;
if(s->f==NULL)
{
temp->f=temp->r=temp;
}
temp->r=temp;
}
void display(struct q *s)
{
while((s->f)!=NULL)
{
printf("%d",s->data);
s=s->f;
}}
