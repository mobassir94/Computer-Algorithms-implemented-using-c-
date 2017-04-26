
#include<stdio.h>
#include<stdlib.h>

struct linklist{
   int value;
   struct linklist *linker; ///here linker is  a pointer to linklist/node
}*headNode;

//struct linklist *headNode; ///creating a pointer to linklist
struct linklist *start;
void display(int data){
struct linklist *temp;
     temp=headNode;
if(headNode==NULL){
        start=temp;
        headNode=temp;
}

    while(temp != NULL){
        printf("%d ",temp->value);
        temp = temp ->linker;
    }

    printf("\n");
}

int main()
{
    int n,data;
    headNode=NULL; ///initially the head Node is empty
      printf("how many numbers you want to insert in the array?:\n");
      scanf("%d",&n);
      printf("Enter %d Numbers Below:\n",n);
      while(n--){
        scanf("%d",&data);
        struct linklist* temp;
       temp = (struct linklist*) malloc(sizeof (struct linklist));
       (*temp).value=data;
       temp->linker=headNode;

         headNode=temp;
       display(data);

      }
       /*
       while(start != NULL){
        printf("%d ",start->value);
        start = start ->linker;
        */
    }



    return 0;
}

