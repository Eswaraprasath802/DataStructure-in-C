#include<stdio.h>
#include<stdlib.h>
struct Node{
    int dta;
    struct Node *left,*right;
};
struct Node *create(){
    int x;
    printf("\nEnter the data:");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->dta=x;
    printf("\nEnter the data for left node of %d",x);
    newnode->left=create();
    printf("\nEnter the data for right node of %d",x);
    newnode->right=create();
    return newnode;
}
int main(){
    struct Node *root;
    root=create();
    return 0;
}