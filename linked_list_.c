#include "linked_list.h"

void append(LinkedList* list, int value){
  Node* new = (Node*)malloc(sizeof(Node));
  new->value = value;
  new->next = NULL;
  if(list->head == NULL){
    list->head = new;
  }else{
    Node* current = list->head;
    while(current->next != NULL){
      current = current->next;
    }
    current->next = new;
  }
  list->size++;
}
