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
   //insertion at starting
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value of the element to add in first:");
    int data;
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

    //insertion at end
    printf("Enter the value of the element to add in end");
    int data;
    scanf("%d",&data);
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    temp=head;
    while (temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;

    }
    //insertion at valid position
    temp=head;
    printf("Enter the position do you want to add:");
    int pos,i=0;
    scanf("%d",&pos);
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data:");
    scanf("%d",&l);
    newnode->data=l;
    newnode->prev=NULL;
    newnode->next=NULL;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    temp=head;
    while ((temp!=NULL))
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}