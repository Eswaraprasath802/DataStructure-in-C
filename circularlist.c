#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*temp,*newnode;
int main(){
    head=NULL,temp=NULL;
    int count=0,nodes=0,value=0;
    printf("Enter number of nodes:");
    scanf("%d",&nodes);
    while(count<nodes){
        printf("Enter the value:");
        scanf("%d",&value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
            newnode->next=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
            newnode->next=head;
        }
        count++;
    }
    temp=head;
    while(temp->next!=head){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
      printf("%d\n",temp->data);

}
