#include<stdio.h>
#define n 5
int front=-1;
int rear=-1;
int dequeue[n];
void frontenqueue(int x){
    if (front==-1 && rear==-1){
        rear=front=0;
        dequeue[front]=x;
    }
    else if(front==0){
        front=n-1;
        dequeue[front]=x;
    }
    else if((front==0 && rear==n-1)||front==rear+1){
        printf("Queue is full");
    }
    else{
        front--;
        dequeue[front]=x;
    }
}
void rearenqueue(int x){
    if((front==0 && rear==n-1)||front==rear+1){
        printf("Queue is full");
    }
    else if (front==-1 &&rear==-1)
    {
        rear=front=0;
        dequeue[rear]=x;
    }
    else if (rear==n-1)
    {
        rear=0;
        dequeue[rear]=x;
    }
    else{
        rear++;
        dequeue[rear]=x;
    }   
}
    void frontdequeue(){
        if(front==-1 && rear==-1){
            printf("Queue is empty");
        }
        else if (front==n-1)
        {
            front=0;
        }
        else if (front==rear)
        {
            front=rear=-1;
        }
        else{
            front++;
        }   
    }
    void reardequeue(){
         if(front==-1 && rear==-1){
            printf("Queue is empty");
        }
          else if (front==rear)
        {
            front=rear=-1;
        }
        else if (rear==0)
        {
           rear=n-1;
        }
        else{
            rear--;
        }
        
    }
    void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1) {
        printf("%d ", dequeue[i]);
        if (i == rear)
            break;
        i = (i + 1) % n;
    }
    printf("\n");
}
void main(){
    while (1)
    {
        int data,value;
       printf("Enter the operation:");
       scanf("%d",&data);
       switch (data)
       {
       case 1:
        printf("Enter the data:");
        scanf("%d",&value);
        frontenqueue(value);
        break;
       case 2:
        printf("Enter the data:");
        scanf("%d",&value);
        rearenqueue(value);
        break;;
       case 3:
         frontdequeue();
         break;;
       case 4:
          reardequeue();
          break;
       case 5:
          display();
          break;
       default:
        break;
       }
    }  
}