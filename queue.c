#include<stdio.h>
int A[20],size,front,rear;
void ENQUEUE(int item)
{
  if(rear==size-1)
    printf("Queue is FULL.Insertion is not possible");
    else if(rear==-1)
{
   front=0; rear=0;
     A[rear]=item;
}
   else
{
   rear++;
   A[rear]=item;
}
}
void DEQUEUE()
{
  if(front==-1)
  printf("Queue is empty");
  else if(front==rear)
{
  printf("Deleted item is %d",A[front]);
  front=-1;
  rear=-1;
}
 else
{
  printf("Deleted item is %d",A[front]);
  front++;
}
}
void Traversal()
{
 int i;
 if(front==-1)
   printf("Queue is empty");
  else
{
  for(i=front;i<=rear;i++)
    printf("%d\t",A[i]);
}
}
void main()
{
 int item,opt;
 front=-1;
 rear=-1;
 printf("enter the size of the Queue :");
 scanf("%d",&size);
 do
{
  printf("\n Enter the option :\n");
  printf("1.ENQUEUE\n2.DEQUQUE\n3.Traversal\n4.Exit\n");
  scanf("%d",&opt);
  switch(opt)
{
  case 1:printf("Enter the item to be inserted:");
        scanf("%d",&item);
        ENQUEUE(item);
        break;
 case 2:DEQUEUE();
       break;
 case 3:Traversal();
       break;
 case 4:break;
  
 default:printf("Invalid option..");
}

}while(opt!=4);
 
} 
