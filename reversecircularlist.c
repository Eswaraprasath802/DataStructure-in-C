#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head=NULL,*tail=NULL,*prenode,*nextnode,*temp,*newnode,*current;
void main(){
    int choice=0,Node,value;
    printf("Enter the no of nodes:");
    scanf("%d",&Node);
    while (choice<Node)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the data:");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=tail=newnode;
            head->next=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
        choice++;
    }
    current=tail->next;
    nextnode=current->next;
    while (current!=tail)
    {
         prenode=current;
         current=nextnode;
        nextnode=nextnode->next;
        current->next=prenode;
        
    }
    nextnode->next=tail;
    tail=nextnode;
    temp=tail->next;
    while(temp!=tail){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
      printf("%d\n",temp->data);

    
    
}