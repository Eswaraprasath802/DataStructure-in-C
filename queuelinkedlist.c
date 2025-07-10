#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front,*newnode,*rear,*temp;
void dequeue(){
    if(front==rear){
        front=rear=NULL;
    }
    else if(front!=NULL){
    temp=front;
    front=front->next;
    free(temp);
    }
}
void main(){
    int choice,i=0,data;
    printf("Enter the  number of nodes:");
    scanf("%d",&choice);
    while (i<choice)
    {
       printf("Enter the data:");
       scanf("%d",&data);
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=data;
       newnode->next=NULL;
       if(front==NULL){
         front=rear=newnode;
         temp=newnode;
       }
       else{
         temp->next=newnode;
         rear=temp=newnode;

       }
       i++;
    }
    while (1)
    {
        int r;
        printf("Do you want to dequeue:");
        scanf("%d",&r);
        if(r==1)
          dequeue();
        else
          break;
    }
    temp=front;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }     
}