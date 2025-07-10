#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*temp,*newnode,*currentnode,*prevnode=0,*nextnode;
void main(){
    head=NULL,temp=NULL;
    int count=0,nodes=0,value=0;
    printf("Enter number of nodes:");
    scanf("%d",&nodes);
    while(count<nodes){
        printf("Enter the value:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        count++;
    }
    nextnode=head;
    currentnode=head;
    while(currentnode!=NULL){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;

    }
    temp=prevnode;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}