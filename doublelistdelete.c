#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*head=NULL,*temp=NULL,*newnode,*tail,*prenode;
void main(){
    int Nodes,iteration=0,value,position;
    printf("Enter the no of nodes:");
    scanf("%d",&Nodes);
    while(iteration<Nodes){
   newnode=(struct Node*)malloc(sizeof(struct Node));
   printf("Enter the data:");
   scanf("%d",&value);
   newnode->data=value;
   newnode->next=NULL;
   newnode->prev=NULL;
   if(head==NULL){
    head=newnode;
    temp=head;
   }
   else{
    newnode->prev=temp;
    temp->next=newnode;
    temp=newnode;
   }
   iteration++;
}
   //delete from starting
   temp=head;
   head=temp->next;
   head->prev=NULL;
   //delete at end
   temp=head;
   while (temp->next!=NULL)
   {
    prenode=temp;
    temp=temp->next;
   }
   tail=temp;
   tail->prev->next=NULL;
   tail=tail->prev;
   free(temp);

   //insert at vaild position
   temp=head;
   position=0;
   iteration=0;
   printf("Enter the valid position:");
   scanf("%d",&position);
   while (iteration<position)
   {
    temp=temp->next;
    iteration++;
   }
   temp->prev->next=temp->next;
   temp->next->prev=temp->prev;

   temp=head;
   while (temp!=NULL)
   {
    printf("%d\n",temp->data);
    temp=temp->next;
   }
    
}