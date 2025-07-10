#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *right,*left;
};
struct Node *createnode(int data){
   struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
   newnode->data=data;
   newnode->right=newnode->left=NULL;
   return newnode;

}
struct Node *insert(int data,struct Node *root){
    if(root==NULL)
    return createnode(data);
    if(data < root->data)
    root->left= insert(data,root->left);
    else if (data > root->data)
    root->right=insert(data,root->right);
    return root;
}
void inorder(struct Node *root){
    if (root == NULL) return;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
void main(){
    printf("Enter the number the nodes:");
    int g;
    scanf("%d",&g);
    struct Node *root=NULL;
    for(int i=0;i<g;i++){
        printf("Enter the data:");
        int data;
        scanf("%d",&data);
        root=insert(data,root);
    }
        printf("\nInorder traversal");
        inorder(root);
}