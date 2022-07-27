#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selsort(int n,int a[])
{
int i,j,t,small,pos;
for(i=0;i<n-1;i++)
{
pos=i;
small=a[i];
for(j=i+1;j<n;j++)
{
if(a[j]<small)
{
small=a[j];
pos=j;
}
}
t=a[i];
a[i]=a[pos];
a[pos]=t;
}
}
void main()
{
int a[15000],n,i,j,ch,temp;
clock_t start,end;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter array elements: ");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
start=clock();
selsort(n,a);
end=clock();
printf("\nSorted array is: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

printf("\n Time taken to sort %d numbers is %f Secs",n,
(((double)(end-start))/CLOCKS_PER_SEC));
}
