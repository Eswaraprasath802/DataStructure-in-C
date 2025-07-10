#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *link;
}*newnode,*top=0,*temp;
void push(){
    printf("Enter the data:");
    int data;
    scanf("%d",&data);
    newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=data;
    newnode->link=top;
    top =newnode;
}
void pop(){
    if(top==0){
        printf("stack underflow");
    }
    else{
        temp=top;
        top=top->link;
        free(temp);
    }
}
void display(){
    if(top==0){
        printf("list is empty");
    }
    else{
        temp=top;
        while (temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
        
    }
}
void main(){
    while (1)
    {
        printf("Enter the operation:");
        int value;
        scanf("%d",&value);
        switch (value)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        default:
            break;
        }
    }
    
}