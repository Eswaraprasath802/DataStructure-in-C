#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*head=NULL,*newnode,*temp=NULL,*prevnode=NULL;
void main(){
    int nodes,count=0,h,k,l;
    printf("Enter the number of nodes:");
    scanf("%d",&nodes);
    while(count<nodes){
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value:");
        scanf("%d",&k);
        newnode->data=k;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->prev=prevnode;
            temp->next=newnode;
            prevnode=temp;
            temp=newnode;
        }
        count++;
    }
        temp=head;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
   
}