#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left,*right;
};
struct Node *create(){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    int x;
    printf("Enter the data:");
    scanf("%d",&x);
    newnode->data=x;
    if(x==-1){
        return NULL;
    }
    printf("Enter the left node of %d",x);
    newnode->left=create();
    printf("Enter the right node of %d",x);
    newnode->right=create();
    return newnode;
}
void inorder(struct Node *root){
    if(root==NULL)
    return ;
    inorder(root->left);
    printf("%d",root->data);
    
    inorder(root->right);
}
void preorder(struct Node *root){
    if(root==NULL)
    return ;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node *root){
    if(root==NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
void main(){
    struct Node *root;
    root=create();
    printf("\n in order node");
    inorder(root);
    printf("\n preorder node");
    preorder(root);
    printf("\n postorder node");
    postorder(root);

}