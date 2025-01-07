#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
void push(int element)
{
 
 
 if(top==max-1)
 {
  printf("stack is full");
}
  else
 {
 top++;
 stack[top]=element;
 printf("pushed %d into stack \n",element);
}
}
int pop()
{
 if(top==-1)
{
 printf("stack is empty");
}
 else {
 int popped_element=stack[top];
 top--;

 printf("poped %d into stack \n",popped_element);
}
}
void traversal()
{
if(top==-1)
{
 printf("stack is empty");
}
 else
{
 

for(int i=top;i>=0;i--)
{
 printf("%d",stack[i]);
}
}
}
int main()
{
    int choice,element;
    
    do{
      printf("1.push \n 2.pop \n 3.traversal \n 4.exit \n");
      scanf("%d",&choice);
    switch(choice)
   {
     case 1:
     printf("enter data");
     scanf("%d",&element);
     push(element);
     break;
     case 2:
     pop();
     break;
     case 3:
     traversal();
     break;
     case 4:
     exit(0);
     break;
     default:
     printf("wrong choice entered");
     break;
     }
  
    }while(choice!=4);
    return 0;
  } 
     

