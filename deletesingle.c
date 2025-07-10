#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
}*head=NULL,*temp=NULL,*prenode,*newnode,*nextnode;
void main(){
    int node,count=0,value,pos,increament=0;
    printf("Enter how many elements do you want:");
    scanf("%d",&node);
    while(count <node){
        printf("Enter the data:");
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
        count++;

    }
//delete at starting 
 temp=head;
 head=head->next;
 free(temp);
 //delete from at end
 temp=head;
 while (temp->next!=NULL)
 {
  prenode=temp;
  temp=temp->next;
 }
prenode->next=NULL;
 temp=head;
//delete from the validn position
temp=head;
 printf("Enter the position do you want to delete:");
 scanf("%d",&pos);
 while(increament<pos-1)
 {
    temp=temp->next;
    increament++;
 }
 newnode=temp->next;
 temp->next=newnode->next;
 temp=head;
  while (temp!=NULL)
 {
    printf("%d\n",temp->data);
    temp=temp->next;
 }
 

}