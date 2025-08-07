#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head=NULL,*temp=NULL,*newnode;
void main(){
    int count=4,choice=1,h=0,k,value,i=0;
    while(choice<count){
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
        choice++;
        }
     //insertion at starting
     printf("insertion at starting\n");
     value=0;
     newnode=(struct Node*)malloc(sizeof(struct Node));
     printf("Enter the data:");
     scanf("%d",&value); 
     temp=head;
     newnode->data=value;
     newnode->next=head;
     head=newnode;
    
      
     
     //insertion at end
     printf("Isertion at end\n");
     value=0;
     newnode=(struct Node*)malloc(sizeof(struct Node));
     printf("Enter the data:");
     scanf("%d",&value);
     newnode->data=value;
     newnode->next=NULL;
     temp=head;
     while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=newnode;

    //insertion at valid position
    printf("insertion at valid position\n");
    temp=head;
    value=0;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the position:");
    scanf("%d",&k);
    printf("Enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    while(h<k){
        temp=temp->next;
        h++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    //finding the length of the node;
    temp=head;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    printf("The length of the node is %d",i);
}