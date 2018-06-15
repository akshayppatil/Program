#include<stdio.h>
/*int search(int *a,int s, int e,int x)
{
int p=pivot(a,s,e);
//int m=(s+e)/2;
if(a[p]==x) return p;
if(x<=a[p]&&x>=a[s])
return  binarySearch(a,s,p-1,x);
return   binarySearch(a,p+1,e,x);

}
int binarySearch(int arr[], int low, int high, int key)
{
   if (high < low)
       return -1;
   int mid = (low + high)/2;  low + (high - low)/2;
   if (key == arr[mid])
       return mid;
   if (key > arr[mid])
       return binarySearch(arr, (mid + 1), high, key);
   return binarySearch(arr, low, (mid -1), key);
}*/
int pivot(int *a,int s,int e)
{

int m=(s+e)/2;
if(s>e) return a[s];
if(s>e) return -1;
if(a[m]>a[m+1]) return a[m+1];
else
{
if(a[s]>=a[m])
{
pivot(a,s,m-1);
}
else
pivot(a,m+1,e);
}
}
int main()
{
int a[]={1,2,3,4,5,6};
int p=pivot(a,0,5);
printf("%d\n",p);
return 0;
}
