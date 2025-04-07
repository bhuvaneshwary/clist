

#include <stdio.h>
#include <stdlib.h>


struct Node {
  int data;
  struct Node* next;
};

void append(struct Node** head, int new_data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    struct Node* last_node = *head; 
    new_node->data = new_data;
    new_node->next = NULL;
  
    if (*head == NULL) {
    *head = new_node;
    return;
    }
  
    while (last_node->next != NULL) last_node = last_node->next;
  
    last_node->next = new_node;
    return;

  }

  void printList(struct Node* node) {
    while (node != NULL) {
    printf(" %d ", node->data);
    node = node->next;
    }
  }

  
  int main() {
    struct Node* head = NULL;
    int n =1 ;
    while (n != 10000000){
        append(&head,n);
        n++;

    }
  
    append(&head, 1);
  
    append(&head, 4);
    
  
    printf("Linked list: ");
    printList(head);
   
  }