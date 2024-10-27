#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int value;
  struct Node* next;
}Node;

typedef struct{
  Node* head;
  int size;
}LinkedList;

void append(Node* root, int value);
void all_print(Node* root);
void delete_list(Node* root);
int size(Node* root);

#endif
