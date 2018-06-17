#include<stdio.h>
#define max 5
struct q{
int f,r;
int a[max];
}s1;
int isf(struct q *s)
{
if(s->f==((s->r)+1)%max)
{
return 1;
}
else
return 0;
}
int ise(struct q *s)
{
if(s->f==-1)
return 1;
else
return 0;
}

int add(struct q *s,int n)
{
if(isf(s))
{
printf("full\n");
return;
}
else
{
s->r=((s->r)+1)%max;
if(s->f==-1)
{
s->f=0;
}else
{//s->r=((s->r)+1)%max;
s->a[s->r]=n;
}
return ;
}
}
int delete(struct q *s)
{
if(ise(s))
{
printf("empty");
return ;
}
else
{
int temp =s->a[s->f];
if((s->r)==(s->f))
{
(s->r)=-1;
(s->f)=-1;
}
else
{
s->f=((s->f)+1)%max;
}
return temp;
}
}
void display(struct q *s)
{
int i=(s->f);
while(i!=s->r)
{
//i=((s->f)+1)%max;
printf("the ele dis ate %d \t",s->a[i]);
i=(i+1)%max;
}
printf("the ele are %d",s->a[i]);
}
void main()
{
s1.f=-1;
s1.r=-1;
add(&s1,8);
add(&s1,2);
add(&s1,3);
int t=delete(&s1);
printf("deleted is %d\n",t);
add(&s1,4);
display(&s1);
}
