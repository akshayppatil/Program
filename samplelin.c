#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(struct node **s,int data)
{
    (*s)->data=data;
    (*s)->next=NULL;
    if(head==NULL)
    {
        head=*s;
    }
}
void print(struct node *head)
{
    while(head!=NULL)
{
    printf("%d\n",head->data);
    head=head->next;
}
    
}
int main() {
   insert(&head,1);
   insert(&head,2);
   insert(&head,3);
   insert(&head,4);
    insert(&head,5);
   print(head);
   
}

