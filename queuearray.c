#include<stdio.h>
#define n 5
int queue[n];
int fornt=-1;
int rear=-1;
void enqueue(int x){
    if (rear==n-1){
        printf("\nstack overflow");
    }
    else if (fornt==-1 && rear==-1)
    {
        fornt++;
        rear++;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(fornt==-1)
    printf("\nStack underflow");
    else if (fornt==rear)
    {
        fornt=rear=-1;
    }
    else
      fornt++; 
}
void display(){
    if(fornt==-1){
        printf("\nthe queue is empty");
    }
    else{
    for(int i=fornt;i<=rear;i++){
        printf("%d",queue[i]);
    }

    }
}
void main(){
    while (1)
    {
        int choice;
        printf("Enter the opeartion:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            int data;
            printf("Enter the value:");
            scanf("%d",&data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
           display();
        default:
            break;
        }
    }
    


}