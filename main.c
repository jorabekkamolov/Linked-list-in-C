#include "linked_list.h"

void test_append() {
    LinkedList list = {NULL, 0};
    append(&list, 10);
    assert(list.head != NULL);
    assert(list.head->value == 10);
    delete_list(&list);
}

void test_size() {
    LinkedList list = {NULL, 0};
    append(&list, 10);
    append(&list, 20);
    assert(size(&list) == 2);
    delete_list(&list);
}

int main() {
    test_append();
    test_size();
    printf("All tests passed!\n");
    return 0;
}
