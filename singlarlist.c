#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*temp,*newnode;
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
    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}