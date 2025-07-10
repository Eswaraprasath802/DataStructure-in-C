#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*head,*temp,*newnode,*tail,*nextnode;
void main(){
    int i=0,Nodes,value;
    printf("Enter the number of node:");
    scanf("%d",&Nodes);
    while (i<Nodes)
    {
        printf("Enter the data:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            tail=head=newnode;
            tail->next=tail->prev=newnode;
        }
        else
        {
           tail->next=newnode;
           newnode->next=head;
           head->prev=newnode;
           newnode->prev=tail;
           tail=newnode;
        }
        i++; 
    }
    //insert at starting
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value:");
    int data;
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=head;
    newnode->prev=tail;
    head->prev=newnode;
    tail->next=newnode;
    head=newnode;
    //insert at end
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->prev=tail;
    newnode->next=head;
    tail->next=newnode;
    tail=newnode;
    //delete at valid position
    int pos;
    i=0;
    printf("Enter the value at valid position:");
    scanf("%d",&pos);
    printf("Enter the value:");
    scanf("%d",&data);
     newnode=(struct Node*)malloc(sizeof(struct Node));
      newnode->data=data;
    temp=head;
    while (i<pos)
{
   temp=temp->next;
   i++;
}
nextnode=temp->next;
temp->next=newnode;
newnode->prev=temp;
newnode->next=nextnode;
nextnode->prev=newnode;
temp=head;
 while(temp!=tail){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
      printf("%d\n",temp->data);
}


