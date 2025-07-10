#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
}*head=NULL,*newnode,*temp=NULL,*tail;
void main(){
    int Nodes,choice=0,k,l,value,h=0;
    printf("Enter the number of nodes:");
    scanf("%d",&Nodes);
    while(choice<Nodes){
        printf("Enter the value:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
            temp->next=head;
        }
        else{
            temp->next=newnode;
            newnode->next=head;
            temp=newnode;
        }
        choice++;
    }
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        tail=temp;
        //insertion at begin
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=78;
        newnode->next=head;
        head=newnode;
        tail->next=head;
        temp=head;
        
        //insertion at end
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=99;
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
        temp=head;

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
    while (temp->next!=head)
    {
       printf("%d\n",temp->data);
       temp=temp->next;
    }
    
printf("%d\n",temp->data);
}