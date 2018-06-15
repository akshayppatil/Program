
struct node *next;
};
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
struct Node * merge(struct Node *p,struct Node *q,struct Node *s)
{
struct Node *nn=NULL;
if(p==NULL) return q;
if(q==NULL) return p;
if(p&&q)
{
if(p->data<=q->data)
{
s=p;
p=p->next;
}
else
{
s=q;
q=q->next;
}
}
nn=s;
while (p&&q)
{
if(p->data<=q->data)
{
s->next=p;
s=p;
p=s->next;
}else
{
s->next=q;
s=q;
q=s->next;
}
}
if(p==NULL) s->next=q;
if(q==NULL)s->next=p;
//while(nn!=NULL)
//{
//printf("%d\n",nn->data);
//nn=nn->next;
return nn;
}



int main()
{

    struct Node* s = NULL;
    struct Node* a = NULL;
    struct Node* b = NULL;
 
    /* Let us create two sorted linked lists to test
      the functions
       Created lists, a: 5->10->15,  b: 2->3->20 */
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
 
    push(&b, 20);
    push(&b, 3);
    push(&b, 2);
    struct Node *e=merge(a,b,s);
while(e!=NULL)
{
printf("%d\n",e->data);
e=e->next;
}
return 0;
}
