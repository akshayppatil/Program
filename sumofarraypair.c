void as(int *a,int l,int u,int x)
{
int count=0;
for(int i=l;i<u;i++)
{
for(int j=i+1;j<u;j++)
{
if(a[i]+a[j]==x)
count++;
}
}
if(count>0)
printf("true");
else
printf("flase");


}

int main()
{
int a[]={11,15,26,38,9,10};
as(a,0,6,88);

return 0;
}
