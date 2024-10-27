#include "linked_list.h"

int main(void){
  LinkedList list = {NULL, 0};

  append(&list, 4);
  append(&list, 3);
  append(&list, 2);
  append(&list, 1);

  sort(&list);

  Node* it;
  it = find(&list, 4);
  insert(&list, it, 4);
  pop(&list, it);
  all_print(&list);
  // delete_list(&list);
}
