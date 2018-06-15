#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
//struct node *stack1=NULL;
//struct node *stack2=NULL;
void push(struct node **s,int x)          //insert at front 1st  addrss is always NULL
{
struct node *nn=(struct node*)malloc(sizeof(struct node));
nn->data=x;
nn->next=*s;
*s=nn;
}
int pop(struct node **s )
{
int res;
while(*s)
{
struct node *temp;
temp=*s;
res=(temp)->data;
*s=temp->next;
free(temp);
return res;
}
}
void en(struct node **s,int x)
{
push(s,x);
}
int de(struct node **s1,struct node **s2)
{
int r,x;
if(*s2==NULL)
{
while(*s1!=NULL)
{
 r=pop(s1);
push(s2,r);
}
}
 x=pop(s2);
return x;

}

int main()
{
struct node *stack1=NULL;
struct node *stack2=NULL;
en (&stack1,8);
en(&stack1,1);
en(&stack1,2);
en(&stack1,3);
int p=de(&stack1,&stack2);
printf("%d",p);
return 0;
}
