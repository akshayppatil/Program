#include<stdio.h>
#define max 3
struct Q
{
int a[max];
int front,rear,count;
}s1;
//*s1.front=0;*s1.rear=-1;*s1.count=0;
int isqfull(struct Q *s)
{
if(s->count==max)
{
printf("full ahi bhai");
return 1;
}
return 0;
}

int isqe(struct Q *s)
{
if(s->count==0)
{
printf("bhai kuch nhi hai");
return 1;
}
return 0;
}
void insert(struct Q *s,int value)
{
if(isqfull(s))
return ;
else
{
s->rear=((s->rear)+1)%max;
s->a[s->rear]=value;
s->count++;
printf("inserted is %d\n",s->a[s->rear]);
}
}
int delete(struct Q *s)
{
if(isqe(s))
return;
else
{
int p=s->a[s->front];
s->front=s->front+1;
s->count--;
return p;
}
}
void display(struct Q *s)
{
int i;
for( i=s->front;i!=s->rear;i=(i+1)%max)
{
printf("list is %d\n",s->a[i]);
}
printf("%d\n",s->a[i]);
//s->front=((s->front)+1)%max;
}

int main()
{
struct Q *p=&s1;
p->front=0;
p->rear=-1;
p->count=0;
insert(p,1);
insert(p,2);
insert(p,3);
display(p);
int l=delete(p);
printf("the deleted is%d\n",l);
insert(p,4);
display(p);
return 0;
}
