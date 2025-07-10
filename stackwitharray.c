#include<stdio.h>
#define N 6
int stack[N];
int top =-1;
void push(){
    printf("Enter the element:");
    int value;
    scanf("%d",&value);
    if(top==N-1)
    printf("Stack overflow\n");
    else{
        top++;
        stack[top]=value;
    }
}
void pop(){
    int data;
    if(top==-1)
        printf("stack underflow\n");
    else
        data=stack[top];
        top--;
        printf("%d",data);

}
void peek(){
    int data;
    if(top==-1)
        printf("stack underflow");
    else
        data=stack[top];
        printf("%d",data);
}
void display(){
    for (int i = top; i >=0; i--)
    {
       printf("%d\n",stack[i]);
    } 
}

void main(){
    while (1){
    printf("Enter the operation:");
    int mod;
    scanf("%d",&mod);
    switch ((mod))
    {
    case 1:
        push();
        break;
    case 2:
         pop();
         break;
    case 3:
        peek();
        break;;
    case 4:
         display();
         break;
    
    default:
        break;
    }
    }
}

