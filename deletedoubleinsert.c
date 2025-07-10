#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*temp,*nextnode,*prevnode,*current,*newnode,*tail,*head;
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
    //delete at starting
    temp=head;
    nextnode=temp->next;
    nextnode->prev=tail;
    tail->next=nextnode;
    head=nextnode;
    free(temp);
    temp=head;
   //delete at end
   temp=tail->prev;
   temp->next=head;
   tail=temp;
   head->prev=tail;
   temp=head;
   //delete at valid position
   printf("Enter the valid position:");
   int pos;
   i=1;
   scanf("%d",&pos);
   temp=head;
   while (i<pos)
   {
    temp=temp->next;
    i++;
   }
   nextnode=temp->next;
   temp->next=nextnode->next;
   nextnode->next->prev=temp;
   free(nextnode);
   temp=head;
 while(temp!=tail){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
      printf("%d\n",temp->data);
   
}