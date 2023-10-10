#include<stdio.h>
void merge(int[],int,int[],int,int[]);
void main()
{
  int a[10],b[10],c[20],n,m,i,j,k;
  printf("Enter the size of the 1st array:");
  scanf("%d",&m);
  printf("Enter the array elements in sorted order:");
  for (i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the size of the 2nd array:");
  scanf("%d",&n);
  printf("Enter the array elements in sorted order:");
  for(j=0;j<n;j++)
  {
     scanf("%d",&b[j]);
  }
  printf("Merged array is:");
  merge(a,m,b,n,c);
}
void merge(int a[10],int m,int b[10],int n,int c[20])
{
   int i,j,k;
   i=0;j=0;k=0;
   while(i<m&&j<n)
   {
     if(a[i]<b[j])
     {
        c[k]=a[i];
        k++;
        i++;
     }
     else
     {
       c[k]=b[j];
       j++;
       k++;
     }
  }
  while(i<m)
  {
    c[k]=a[i];
    k++;
    i++;
  }
  while(j<n)
  {
     c[k]=b[j];
     k++;
     j++;
  }
  for(k=0;k<m+n;k++)
  { 
  printf("%d\t",c[k]);
  }  
}
