#include "linked_list.h"

int main(void){
  LinkedList list = {NULL, 0};

  append(&list, 12);
  append(&list, 13);
  append(&list, 14);
  append(&list, 15);

  all_print(&list);

  printf("Size List: %d\n", size(&list));

  delete_list(&list);
}
