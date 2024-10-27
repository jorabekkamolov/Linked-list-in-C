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

  void sort(LinkedList* list){
    Node* current = list->head;
    for(; current != NULL; current = current->next){
      int i = current->value;
      Node* temp_current = current->next;
      for(; temp_current != NULL; temp_current = temp_current->next){
        int j = temp_current->value;
        if(i > j){
          current->value = j;
          temp_current->value = i;
          i = j;
        }
      }
    }
  }

  Node* find(LinkedList* list, int value){
    Node* current = list->head;
    while(current->value != value){
      current = current->next;
    }
    return current;
  }

  void insert(LinkedList* list, Node* pos, int value){
    Node* new = (Node*)malloc(sizeof(Node));
    new->next = pos;
    new->value = value;
    if(list->head == pos){
      list->head = new;
    }else{
      Node* current = list->head;
      while(current->next != pos){
        current = current->next; 
      }
      current->next = new;
    }
    list->size++;
  }

  void pop(LinkedList* list, Node* pos){
    Node* current = list->head;
    if(current == pos){
      if(current->next == NULL){
        free(current);
        list->head = NULL;
      }else{
        list->head = current->next;
        free(current);
      }
    }else{
      while(current->next != pos){
        current = current->next;
      }
      Node* temp = current->next;
      current->next = temp->next;
      free(temp);
    }
    list->size--;
  }
