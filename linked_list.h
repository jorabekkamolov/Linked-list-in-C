#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Node{
  int value;
  struct Node* next;
}Node;

typedef struct{
  Node* head;
  int size;
}LinkedList;

void append(LinkedList* list, int value);
void delete_list(LinkedList* list);
void all_print(LinkedList* list);
int size(LinkedList* list);
void sort(LinkedList* list);
Node* find(LinkedList* list, int value);
void insert(LinkedList* list, Node* pos, int value);
void pop(LinkedList* list, Node* pos); 

#endif
