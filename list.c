
#include <stdio.h>
#include <stdlib.h>



typedef struct node {
	int data;
	struct node* next;

}node; 

typedef struct node2{
		int data;
		int data1;
		int data2;
		char c;
		char d;
		char e;
		char f;
}node2;


void traverse_list(node *ptr);

void append(int val, node ** n);

int main()
{
		node* list = NULL;
		
		int *intptr = NULL ;
		char *charptr = NULL ;

		printf("size of node %ld \n",sizeof(node*));
		printf("size of node2 %ld \n",sizeof(node2));
		printf("size of node2* %ld \n",sizeof(node2*));
		printf("size of node2* %ld \n",sizeof(intptr));
		printf("size of node2* %ld \n",sizeof(charptr));
		printf("the address of list before apending = %p \n",list);

		printf("the address of list before allocating,address of list = %p \n",&list);
		append(5,&list);

		printf("the address of list after invoking append fucntion from main= %p \n",list);


	printf("Hello World");
}


void append(int val, node ** n){
		if(*n==NULL)
		{
				
				printf("list is null \n");
				*n = malloc(sizeof(node));

				printf("the address of list after allocating head = %p \n",*n);
				printf("the address of list after allocating,address of head = %p \n",n);
		}

}

void traverse_list(node *ptr)
{
	while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }

}

