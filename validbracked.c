#include<stdio.h>
#define n 23
int stack[n];
int top =-1;
    int push(char ch){
        if(top==n-1){
            printf("stack overload");
        }
        else{
            top++;
            return stack[top]=ch;
        }
    }
    int pop(){
        if(top==-1)
        return '\0';
        else
         return stack[top--];
    }
    int ismaths(char start,char end){
        return ((start =='('&& end==')')||(start =='{'&& end=='}')||(start =='['&& end==']'));
    }
    int isbalance(char d[]){
    int i=0;
    char ch;
    char pup;
    while(d[i]!='\0'){
        ch=d[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']'){
            pup=pop();
            if(pup=='\0'||!ismaths(pup,ch))
                return 0;
        }
        i++;
    }
return (top == -1);
}
void main(){
    char d[20];
    printf("Enter the expression:");
    scanf("%s",d);
    if(isbalance(d)){
        printf("Balance equation");
    }
    else{
        printf("The Equation is not balanced");
    }
}
