#include<stdio.h>
struct node{
int info;
struct node *r;
struct node *l;
};
struct node *root;
root=NULL;
int insert(struct node *s, int value)
{
if(s==NULL)
{
struct node *temp=struct node*(malloc*sizeof(struct node));
temp->info=value;
temp->r=temp->l=NULL;
root=temp;
return root;
}
else
if(value>root->info)
return insert(s->r,value)
return insert(s->l,value)
return 0;
}
int display(struct node *s)
{
inorder(s->l);
//printf("%d\n",s->info);
//inorder(s->r);
}
  int inorder(struct node *s)
{
if(s==NULL)return;
inorder(s->l);
printf("%d",s->info);
inorder(s->r);
}
int main()
{
//struct node *root;
insert(root,70);
insert(root,60);
insert(root,80);
return 0;
}
