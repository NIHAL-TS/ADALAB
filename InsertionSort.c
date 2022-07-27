#include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 void delay()
 {
 int i,j,temp;
 for(i=0;i<5000000;i++)
 {
 temp=30/333;
 return;
 }
 }

 void insertion_sort(int arr[],int n)
 {
 int i,j,key;
 for(i=1;i<n;i++)
 {
 delay();
 key=arr[i];
 j=i-1;
 while(j>=0&&key<arr[j])
 {
 arr[j+1]=arr[j];
 j--;
 }
 arr[j+1]=key;
 }
 }

 void print_array(int arr[],int n)
 {
 int i;
 for(i=0;i<n;i++)
 {
 printf("\t%d",arr[i]);
 }
 }

 void main()
 {
 clock_t start,end;
 int n;
 printf("enter the size of array: ");
 scanf("%d",&n);
 int arr[n];
 printf("\n enter the elements of array: ");
 for(int i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("\n before sort=");
 print_array(arr,n);
 start=clock();
 insertion_sort (arr,n);
 printf("\after sort:");
 print_array(arr,n);
 end=clock();
 printf("\n time taken:%f",(double)(end-start)/CLOCKS_PER_SEC);


 }
