#include "list.h"

int main(){
    Node* head = init_list(1);
    append(head, 5);
    append(head, 2);
    append(head, 3);
    append(head, 0);
    print_list(head);
    return 0;
}