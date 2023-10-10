#include<stdio.h>
#include<stdlib.h>
int choice,j,i=0,a[50],b[10],s;
void search();
void sort();
void delete();
void insert();
void display();
void menu();
int main()
{
   printf("\n Enter the size of array:");
   scanf("%d",&s);
   printf("Enter the elements of array:");
   for(i=0;i<s;i++)
   {
     scanf("%d",&a[i]);
   }
   menu();
   return 0;
}
void menu()
{
   printf("\n1.Insert");
   printf("\n2.Delete");
   printf("\n3.Sort");
   printf("\n4.Search");
   printf("\n5.Display");
   printf("\n6.Exit");
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
           insert();
           break;
      case 2:
           delete();
           break;
           
      case 3:
           sort();
           break;
      case 4:
           search();
           break;
      case 5:
           display();
           break;
      case 6:
           exit;
   }
}
void search()
{
    int ele,loc;
    printf("\n Element to be searched:");
    scanf("%d",&ele);
    //printf("Elements found at:");
    for(i=0;i<s;i++)
    {
        if(ele==a[i])
        {
           printf("elements found at %d",i);
        }
    }
    //getch();
    menu();
}
void sort()
{
    
    printf("\n Current array:");
    for(i=0;i<s;i++)
        printf("\t%d",a[i]);
    for(i=0;i<s;i++)
    {
       for(j=i+1;j<s;j++)
       if(a[i]>a[j])
       {
         a[i]=a[i]+a[j];
         a[j]=a[i]-a[j];
         a[i]=a[i]-a[j];
      }  
     
    }
    printf("\n Sorted array:");
    for(i=0;i<s;i++)
        printf("\t%d",a[i]);
   
    menu();
}    
void insert()
{
   int loc,ele;
   printf("\n Enter the location:");
   scanf("%d",&loc);
   printf("Enter the element to be inserted:");
   scanf("%d",&ele);
   for(i=s;i>loc-1;i--)
      a[i]=a[i-1];
      a[loc]=ele;
   printf("\n Elemet inserted");
   printf("\n New array after insertion:");
   s++;
   for(i=0;i<s;i++)
      printf("\t%d",a[i]);
  
   menu();
}
void delete()
{
  int loc;
  printf("\n Enter locatio:");
  scanf("%d",&loc);
  for(i=loc;i<s-1;i++)
  {
     a[i]=a[i+1];
  }
  //a[s-1]=NULL;
  printf("\n Element deleted");
  printf("\n New array after deletion:");
  s--;
  for(i=0;i<s;i++)
     printf("\t%d",a[i]);
  
  menu();
}
void display()
{
   int i;
   if(s==0)
   {
      printf("No elements to display!");
      return;
   }
   printf("Array elemnts are:");
   for(i=0;i<s;i++)
   {
      printf("\t%d",a[i]);
   }
  
   menu();
}     
        
  
