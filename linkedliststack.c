#include<stdio.h>
#include<stdlib.h>
struct node   
{  
	int data;  
	struct node *next;   
};  
struct node *head;
int top = -1,size;
struct node *create_node (int data)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void push(struct node *ptr)  
{   
	if(top==size-1)
		printf("\nCan't insert! Stack is full.\n");
	else
	{
		if(head==NULL)
		{ 
			top=0;
			head=ptr; 
		} 
		else
		{
			top++; 
			ptr->next = head;  
			head=ptr; 
		} 
		 printf("\nItem inserted\n");
		
	}
      
}
void pop()  
{  
	struct node *ptr;  
	if(top == -1 || head == NULL)  
	{  
		printf("\nCan't delete! Stack is empty\n");  
	}  
	else   
	{  
		ptr = head;  
		head = ptr->next;  
		free(ptr);  
		printf("\nItem deleted from the stack ...\n"); 
		top--; 
	}  
}  
void traversal()  
{  
	struct node *ptr;  
	ptr = head;   
	if(top == -1 || ptr == NULL)  
	{  
		printf("\nStack is empty !Nothing to print\n");  
	}  
	else  
	{  
		printf("\nprinting values . . . . .\n");
		while (ptr!=NULL)  
		{  
			printf("\n%d",ptr->data);  
			ptr = ptr -> next;  
		}  
	}
}
int main()
{ 	
	int choice,n=1,item;
	printf("Enter the size of stack :");
	scanf("%d",&size);
	do
	{
		printf("\n 1.Traversal\n 2.Push\n 3.Pop\n 4.Exit \nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				traversal();
		     		break;
			case 2:
				printf("\nEnter the item which you want to insert :");  
            			scanf("%d",&item); 
				struct node *newnode;
				newnode=create_node(item);
				push(newnode);
		     		break;
			case 3:
				pop();
		     		break;
			case 4:
				return 0;
			default:
				printf("invalid choice");
		}
	}
	while(n==1);
	return 0;	
	
}
