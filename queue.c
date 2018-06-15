#include<stdio.h>
#define max 3
struct Q{
int a[max];
int f;
int r;
}s1;
int isqemp(struct Q *s)
{
if(s->f==(max-1)&&s->f==-1)
return 1;
else return 0;
}
int isqf(struct Q *s)
{
if(s->r==max-1)
return 1;
else
return 0;
}

void add(struct Q *s,int value)
{
if(isqf(s))
return ;
else
{
if(s->f==-1)
{
(s->f)++;
s->a[s->f]=value;
}
else
{
s->a[s->r]=value;
}
(s->r)++;
}
}
int delete(struct Q *s)
{
if(isqemp(s))
{
printf("emopty");
return;
}
else{
int temp=s->a[s->f];
s->f++;
return temp;
}
}
void display(struct Q *s)
{
for(int i=s->f;i<=(s->r)-1;i++)
printf("the ele re %d\t",s->a[i]);
}
int main()
{
s1.f=-1;
s1.r=s1.f+1;
add(&s1,1);
add(&s1,2);
add(&s1,3);
add(&s1,4);
add(&s1,5);
int t=delete(&s1);
delete(&s1);
delete(&s1);
int l=delete(&s1);
printf("the pop is%d\n",t);
printf("%d\n",l);
display(&s1);
return 0;
}
