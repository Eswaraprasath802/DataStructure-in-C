#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*tail,*newnode,*temp,*prenode,*current,*nextnode;
void main(){
    int nodes,choice=0,value,pos=1;
    printf("Enter the No of nodes:");
    scanf("%d",&nodes);
    while(choice<nodes){
        printf("Enter the data:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=tail=newnode;;
            tail->next=head;
        }
        else{
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
        choice++;
    }
    //delet from begin
    temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
    //delete at end
    temp=head;
     while (temp->next!=head)
    {
       prenode=temp;
       temp=temp->next;
    }
    prenode->next=head;
    tail=prenode;
   
   //delete at valid position
   temp=head;
     printf("Enter the valid position:");
     scanf("%d",&pos);
     choice=0;
     while (choice<pos-1)
     {
        temp=temp->next;
        choice++;
     }
     current=temp;
     nextnode=current->next;
     current->next=nextnode->next;
     free(nextnode);
    temp=head;
    while(temp->next!=head){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
      printf("%d\n",temp->data);     
}