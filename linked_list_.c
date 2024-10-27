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

void delete_list(LinkedList* list){
  Node* current = list->head;
  while(current != NULL){
    Node* temp = current;
    current = current->next;
    free(temp);
  }
  list->head = NULL;
  list->size = 0;
}

void all_print(LinkedList* list){
  Node* current = list->head;
  while(current != NULL){
    printf("%d\n", current->value);
    current = current->next;
  }
}

int size(LinkedList* list){
  return list->size;
}
