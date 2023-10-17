#include<stdio.h>
#include<stdlib.h>
int i,n,ele,stack[100],choice,top=-1;
void menu();
void display();
void push();
void pop();
void peek();
int main()
{
   printf("\nEnter the size of the array:");
   scanf("%d",&n);
   
   menu();
   return 0;
} 
void menu()
{
   printf("\n1.display");
   printf("\n2.push");
   printf("\n3.pop");
   printf("\n4.peek");
   printf("\n5.exit");
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
          display();
          break;
      case 2:
          printf("Enter the element:");
          scanf("%d",&ele);
          push(ele);
          break;
      case 3:
          pop();
          break;
      case 4:
          peek();
          break;
      case 5:
          exit;
  }
}
void display()
{
   int i=0;
   if(top==-1)
   printf("stack is empty!");
   else
   {
     printf("The stack elements are:");
     for(i=top;i>-1;i--)
     {
       printf("\t %d",stack[i]);
     }
   }
   menu();
}
void push(int ele)
{
   int n;
   if(top!=50)
   {
     top=top+1;
     
     stack[top]=ele;
     
     printf("insertion successfull!!!");
   }
   else
   {
     printf("can not insert,stack is full!!");
   }
   menu();
}
void pop()
{
  int ele;
  if(top==-1)
  printf("could not retrieve daata,stack is empty!!\n");
  else
  {
    ele=stack[top];
    printf("deleted:%d",ele);
    top=top-1;
  }
  menu();
}
void peek()
{
  printf("The top most element of the stack is:\t %d",stack[top]);
  menu(); 
}             
