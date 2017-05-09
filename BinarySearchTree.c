///C program to implement Binary search tree(print using : in order traversal)

#include<stdio.h>
struct node{
   int data;
   struct node *left,*right;
};

struct node *root;

struct node *BST(struct node *rootptr,int data)
{

    if(rootptr==NULL){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
        rootptr=temp;
    }
    else if(data>=rootptr->data)rootptr->right= BST(rootptr->right,data);
    else rootptr->left= BST(rootptr->left,data);
    return rootptr;

}
void print(struct node *root){
    if(root->left != NULL)
    print(root->left);
    printf("%d ",root->data);

    if(root->right != NULL)
   print(root->right);
}
int main()
{
    root=NULL;

    int n;
    printf("Enter Numbers in the tree(ctrl+alt+z to exit entering numbers and print):\n");

    while(scanf("%d",&n)==1){
         root=BST(root,n);
         //printf("%d ",root->data);

    }
    print(root);

    return 0;
}
