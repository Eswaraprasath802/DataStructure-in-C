#include<stdio.h>
#define n 5
int rear=-1,front=-1;
int queue[n];
void enqeue(int data){
    if(rear==-1 && front==-1){
        rear++;
        front++;
        queue[rear]=data;
    }
    else if (((rear+1)%n)==front)
    {
       printf("queue overflow");
    }
    else{
        rear=(rear+1)%n;
        queue[rear]=data;
    }
    
}
void dequeue(){
    if(rear==-1&&front==-1){
        printf("the list is empty");
    }
    else if (rear==front)
    {
       rear=front=-1;
    }
    else{
        front=(front+1)%n;
    }
    
}
void display(){
    int i=front;
    while (i!=rear)
    {
        printf("%d",queue[i]);
        i=(i+1)%n;
    }
       printf("%d",queue[rear]);
    
}
void main(){
    while (1)
    {
        int op;
        printf("Enter the operation:");
        scanf("%d",&op);
        switch (op)
        {
        case 1:{
            int data;
            printf("Enter the data:");
            scanf("%d",&data);
            enqeue(data);
            break;
        }
        case 2:
            dequeue();
            break;;
        case 3:
           display();
        default:
            break;
        }
    }
    
}