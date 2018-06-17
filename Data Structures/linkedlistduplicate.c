#include<stdio.h>
#include<malloc.h>
struct Node
{
int data ;
struct Node *next;
};
int main()
{
struct node *s1=NULL;
append(&s1,21);
append(&s1,11);
append(&s1,21);
append(&s1,22);
append(&s1,32);
a(&s1);
print(s1);
}

/*int  game(struct Node **s1)
{
struct Node *temp=*s1;
while(temp!=NULL)
{
struct Node *temp1=temp->next;
if(temp1==NULL)
{
printf("%d\n",temp->data);
return 0;
}
if(temp->data!=temp1->data)
{
printf("%d\n",temp->data);
}

temp=temp->next;
}
}*/
//struct Node *head=s1;
void print(struct Node *s)
{
struct Node *a=s;
while(a!=NULL)
{
printf("%d\n",(a)->data);
a=a->next;
}
return 0;
}
void a(struct Node **s)
{
struct Node *dum,*head,*ptr2;
head=*s;
while(head!=NULL)
{
ptr2=head->next;
{
while(ptr2!=NULL)
{
if(head->data==ptr2->data)
{
dum=ptr2;
head->next->next=ptr2->next;
free(dum);
}
else
{
ptr2=ptr2->next;
}
}
head=head->next;
}
}
}

void append(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head_ref;  /* used in step 5*/
  
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next 
          of it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
      
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
  
    /* 6. Change the next of last node */
    last->next = new_node;
    return;   
}

