#include<stdio.h>
#include<malloc.h>
struct node
{
int x;
struct node *next;
};
struct node *start=NULL;
void insert(struct node **s,int p)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->x=p;
temp->next=*s;
*s=temp;
}
int index(struct node *s,int pos)
{
int i=0;
while(i<pos)
{
s=s->next;
i++;
}
return s->x;
}
void print(struct node *s)
{
while(s!=NULL)
{
printf("%d\n",s->x);
s=s->next;
}
}
int main()
{
//struct node *start=NULL;
insert(&start,1);
insert(&start,2);
insert(&start,3);
int p=index(start,1);
printf("the data is %d\n",p);
print(start);
return 0;
}




