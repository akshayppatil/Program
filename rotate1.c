
int temp=a[n-1];
for(int i=n-1;i>0;i--)
{
a[i]=a[i-1];
}
a[0]=temp;
}
void print(int *a)
{
for(int i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}
int main()
{
int a[]={1,2,3,4,5};
rot(a,5);
print(a);
return 0;
}
