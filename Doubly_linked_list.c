///write a program to demonstrate doubly linked list in c
#include<stdio.h>

struct node{
      int data;
      struct node *prev;
      struct node *next;
};

///creating nodes by allocating memory from heap
  struct node *newnode(int x){
         struct node *create_node=(struct node *)malloc(sizeof(struct node));
         create_node->data=x;
         create_node->prev=NULL;
         create_node->next=NULL;
         return create_node;
  };
int main()
{
    struct node *head,*temp;
    int n,x;
    printf("How many numbers?:\n");
    scanf("%d",&n);
    printf("Enter %d Numbers Below:\n",n);
    head=NULL;
    for( ; n>0; n--){
            scanf("%d",&x);
            struct node *createNODE =newnode(x);
            if(head==NULL){
            head=createNODE;
            temp=head;
            continue;
          }


          head->prev=createNODE;
          createNODE->next=head;
          head=createNODE;

    }

    /// printing data in actual format
         printf("printing data in actual format:") ;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }

      printf("\n\n");
    ///printing the data in reverse order
    printf("printing the data in reverse order:") ;
    while(head != NULL){
        printf("%d ",head->data);
        head=head->next;
    }
     printf("\n");


    return 0;
}
