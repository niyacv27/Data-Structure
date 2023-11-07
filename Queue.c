#include<stdio.h>
#include<stdlib.h>
int queue[20];
int rear=-1;
int front=-1;
void enqueue(int a);
void dequeue();
void display();
void peek;
void main()
{
  int x,a;
   while(1)
   {
      printf("\n MENU");
      printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.peek\n5.Exit");
      printf("Enter your choice:");
      scanf("%d",&x);
      switch(x)
      {
        case 1:
             printf("Enter the element to be inserted:");
             scanf("%d",&a);
             enqueue(a);
             break;
       case 2:
             dequeue();
             break;
       case 3:
             display();
             break;
       case 4:
             peek();
             break;
       case 5:
             exit(0);
       default:
             printf("Enter correct choice");
     }
   }
}   
void enqueue(int a)
{
   if(rear==19)
   {
      printf("Queue become overflow");
   }
   else
   {
     front=0;
     rear=rear+1;
     queue[rear]=a;
   }
  
}
void dequeue()
{
   if(front==-1||front>rear)
   {
      printf("Queue is underflow");
   }
   else
   {
      printf("Dequeued element is %d",queue[front]);
      front=front+1;
   }
  
}
void display()
{ 
    int i=0;
    if(front==-1)
    {
       printf("Queue is empty\n");
    }
    else
    {
      printf("The Queue elements are:");
      for(i=front;i<=rear;i++)
      {
         printf("%d\t",queue[i]);
      }
    } 
}   
void peek()
{
   printf("peek element is %d",queue[front]);
}         
                     
                                   
