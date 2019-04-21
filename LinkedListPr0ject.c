#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//DESIGNING A SIMPLE CUSToMer Service Center Using LInked List in c
// Data Structure to store a linked list node
struct Node
{
	int data;
	struct Node* next;
};

// Helper function to print given linked list
void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("null");
}

// Helper function to insert new Node in the beginning of the linked list
void push(struct Node** head, int data)
{
	// Allocate the new Node in the heap and set its data
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;

	// Set the .next pointer of the new Node to point to the current
	// first node of the list.
	newNode->next = *head;

	// Change the head pointer to point to the new Node, so it is
	// now the first node in the list.
	*head = newNode;
}

// The opposite of Push(). Takes a non-empty list and removes the front
// node, and returns the data which was in that node.
int pop(struct Node** headRef)
{
	// underflow condition
	if (*headRef == NULL)
		return -1;

	struct Node* head = *headRef;
	int result = head->data; // pull out data before node is deleted

	(*headRef) = (*headRef)->next;	// unlink the head node for the caller
									// Note the * -- uses a reference-pointer
									// just like Push() and DeleteList().

	free(head);				 // free the head node

	return result;				// don't forget to return the data from link
}

// main method
int main(void)
{

char pasword[10],usrname[10], ch,mypass[10]="12500000",myname[10]="k";
int m;

Retry:

printf("Enter User name: ");
gets(usrname);
 if (strcmp(usrname,myname) == 0){
    printf("welcome Dear, %s,please ",usrname);
 }else {
     printf("UNKNoWN User!!!\n");
  goto Retry;
 }
printf("Enter the password (8 characters): ");

for(m=0;m<8;m++)
{
ch = getch();
pasword[m] = ch;
ch = '*' ;
printf("%c",ch);
}

pasword[m] = '\0';



    if (strcmp(pasword,mypass) == 0)
      printf("\npassword matched!!!.\n");
    else {
            printf("\nIncorrect Password!!!\n");
            goto Retry;
    }








    int i=0,choice;
     int hw=0,k;

	// points to the head node of the linked list
	struct Node* head = NULL;

	while(1){


             /* Menu */

        printf("------------------------------------\n");
        printf("    CUSTOMER SERVICE CENTER \n");
        printf("------------------------------------\n");
        printf(" Your options :\n ") ;
        printf("1. Enter your SSN:\n");
        printf("2. Delete  the SSN from the list \n");
        printf("3. Display available SSN :\n");
        printf("4. Display the number of available SSN.\n");
        printf("5. Exit.\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

       if(choice == 1){
                printf("How Many SSN Numbers? : ");

                scanf("%d",&hw);
                if(hw>0 && hw<11){
                        // input keys
	                     int keys[hw];
        printf("Enter %d SSN Numbers Below : \n",hw);
	for(k=0 ; k<hw; k++)scanf("%d",&keys[k]);


	     int n = sizeof(keys)/sizeof(keys[0]),j;
		// construct linked list
	for (j = n-1; j >= 0; j--)
		push(&head, keys[j]);


                }else{
                 printf("Input Error!!!\n");
                }
        }else if(choice==2){


	 int ii = pop(&head);
	printf("Popped node %d\n", ii);
        }
	else if(choice==4){

            printList(head);
	}
	else if(choice==3){
        int tcount = 10-hw;
        printf("There are %d Available SSN Remaining\n",tcount);
	}else if(choice == 5){
	return 0;
	}else{
	  printf("Input Err0r!!!\n");
	}
	}

	return 0;
}
