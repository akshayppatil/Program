#include<stdio.h>
#include<malloc.h>
struct stack
{
int data;
struct stack *next;
};
struct stack *head=NULL;
void push(struct stack **head,int data)
{
struct stack *s1=(struct stack*)(malloc(sizeof(struct stack)));
s1->data=data;
s1->next=&head;
head=s1;
}
void print(struct stack *head)
{
struct stack *s1=head;
while(s1!=NULL)
{
printf("%d\n",s1->data);
s1=s1->next;
}
}
int main()
{
push(&head,1);
push(&head,2);
push(&head,3);
print(head);
return 0;
}
