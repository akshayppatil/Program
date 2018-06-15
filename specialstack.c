#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *s1=NULL,*s2=NULL;
void push(struct node **s,int x)
{
struct node *nn=(struct node *)(malloc(sizeof(struct node)));
nn->data=x;
nn->next=*s;
*s=nn;
}
int pop(struct node **s)
{
struct node *temp;
temp=*s;
int x=temp->data;
*s=temp->next;
free(temp);
return x;
}
void insert(struct node **s1,struct node **s2,int x)
{
if(*s1==NULL&&*s2==NULL)
{
push(s1,x);
push(s2,x);
}
if(x>(*s2)->data)
{
push(s1,x);
}
else{
push(s1,x);
push(s2,x);
}
}
int get(struct node **s)
{
int x=pop(s);
return x;
}
int main()
{
insert(&s1,&s2,15);
insert(&s1,&s2,19);
insert(&s1,&s2,14);
insert(&s1,&s2,18);
int p=get(&s2);
printf("%d\n",p);
return 0;
}

