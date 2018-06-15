#include<stdio.h>
#include<malloc.h>
struct node
{
int x;
struct node *next;
};
struct node *start;
int deleteatpos(struct node *s,int pos)
{
if(pos==1)
deleteatfirst(s);
struct node *temp;
temp=s;
struct node* temp1;
while((pos-1)>0)
{
temp1=temp;
temp=temp->next;
pos--;
}
temp1->next=temp->next;
int p=temp->x;
return p;
free(temp);
}
int deleteatlast(struct node *s)
{
struct node *a=s;
struct node *temp1;
while(a->next!=NULL)
{
temp1=a;
a=a->next;
}
int x=(temp1->next)->x;
temp1->next=NULL;
return x;
free(temp1->next);
}
void insertatfirst(struct node **s,int value)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->next=*s;
temp->x=value;
*s=temp;
}
void insertatlast(struct node **s,int n)
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
void insertatpos(struct node *s,int pos,int value)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
struct node *q=s;
struct node *pr;
pos=pos-1;
while(pos>0)
{
pr=q;
q=q->next;
pos--;
}
temp->x=value;
temp->next=q;
pr->next=temp;
}
/*struct node *temp=(struct node*)malloc(sizeof(struct node));
struct node *a=s;
temp->x=value;
for(int i=1;i<=pos-2;i++)
{
a=a->next;
}
temp->next=a->next;
a->next=temp;
}*/
int deleteatfirst(struct node **s)
{
struct node *temp;
temp=*s;
*s=temp->next;
int dv=temp->x;
return dv;
free(temp);
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
insertatlast(&start,1);
insertatlast(&start,2);
//printf("%d\n",start->x);
insertatlast(&start,3);
//insertatfirst(&start,4);
display(start);
//insertatfirst (&start,8);
insertatpos(start,3,9);
display(start);
int dv=deleteatfirst(&start);
int ld=deleteatlast(start);
int de=deleteatpos(start,2);
printf("the pos 2 elemnet deleted is %d\n",de);
printf("the lst deleted is %d\n",ld);
printf(" the first deleted elem is %d\n",dv);
display(start);
return 0;
}
