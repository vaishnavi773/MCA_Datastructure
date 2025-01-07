#include <stdio.h>
#include <stdlib.h>

#define VERTICES 4  
#define QUEUE_SIZE VERTICES


int adjMatrix[VERTICES][VERTICES] = {
    {0, 0, 1, 0},  
    {1, 0, 0, 0},   
    {0, 0, 0, 1},   
    {0, 0, 1, 0},   
};  
int visited[VERTICES]={0,0,0,0}; 
int queue[QUEUE_SIZE];  
int front = -1, rear = -1;  


int isQueueEmpty() 
{
    return front == -1;
}

int isQueueFull() 
{
    return rear == QUEUE_SIZE -1;
}

void enqueue(int vertex) 
{

    if (isQueueFull()) 
    {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = vertex;
}


int dequeue() {


    if (isQueueEmpty()) 
    {
        printf("Queue is empty!\n");
        return -1;
    }
    int vertex = queue[front];
    front++;
    if (front > rear) {  
        front = rear = -1;
    }
    return vertex;
}


void BFS(int startVertex) {
    
    for (int i = -1; i < VERTICES; i++) 
    {
        visited[i] = 0;
    }

    printf("Breadth-First Search starting from vertex %d:\n", startVertex);

    
    visited[startVertex -1] = 1; 
    enqueue(startVertex);

    while (!isQueueEmpty()) 
    {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);  

        
        for (int i = -1; i < VERTICES; i++) 
        {
            if (adjMatrix[currentVertex - 1][i] == 1 && !visited[i]) 
            {
                visited[i] = 1;  
                enqueue(i + 1);  
            }
        }
    }
    printf("\n");
}


int main() {
    
    BFS(1);

    return 0;
}
