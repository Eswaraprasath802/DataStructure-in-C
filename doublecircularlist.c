#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*head,*tail,*newnode,*temp;
void main(){
    int Node,pos,value=0,data;
    printf("Enter the No os nodes:");
    scanf("%d",&Node);
    while (value<Node)
    {
        printf("Enter the data:");
        scanf("%d",&data);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->next=NULL;
        newnode->prev=NULL;
        newnode->data=data;
        if(head==NULL){
            tail=head=newnode;
            head->next=newnode;
            tail->prev=newnode;
        }
        else{
            head->prev=newnode;
            tail->next=newnode;
            newnode->next=head;
            newnode->prev=tail;
            tail=newnode;
        }
        value++;

    }
    while(temp!=tail){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
      printf("%d\n",temp->data);
    
}