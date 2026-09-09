#include "list.h"

int main(){
    Node* head = init_list();
    insert_at(&head, 5, 67);
    insert_at(&head, 0, 67);
    print_list(head);
    append(&head, 5);
    append(&head, 2);
    append(&head, 3);
    append(&head, 0);
    printf("%d\n", find(head, 67));
    print_list(head);
    push_front(&head, 1);
    print_list(head);
    printf("index of '5': %d\nLnegth of the list: %d\n", find(head, 5), length(head));
    printf("%d\n", length(head));
    insert_at(&head, 3, 6);
    print_list(head);
    insert_at(&head, 0, 81);
    print_list(head);
    pop(&head);
    pop(&head);
    print_list(head);
    free_list(&head);
    if (head == NULL){
        printf("List is empty\n");
    } else {
        printf("List is not empty\n");
    }
    print_list(head);
    append(&head, 1);
    print_list(head);
    pop(&head);
    print_list(head);
    pop(&head);
    return 0;
}