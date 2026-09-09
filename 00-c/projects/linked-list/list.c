#include <stdio.h>
#include <stdlib.h>
#include "list.h"


Node* create_node(int value){
    Node* head = malloc(sizeof(Node));
    if (head == NULL){
        fprintf(stderr, "ERROR: Не удалось выделить память\n");
    }
    head->value = value;
    head->next = NULL;
    return head;
}

Node* init_list(){
    Node* head = NULL;
    return head;
}

void free_list(Node** head){
    Node* next;
    Node* current = *head;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void append(Node** head, int value){
    if (*head == NULL){
        *head = create_node(value);
        return;
    }
    Node* current = *head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = create_node(value);
}

void print_list(Node* head){
    while (head != NULL){
        printf("%d\t", head->value);
        head = head->next;
    }
    printf("\n");
}

int pop(Node** head){
    Node* current = *head;
    if (current == NULL){
        fprintf(stderr, "Warning: List is empty\n");
        return 0;
    }
    if (current->next == NULL){
        int popped_value = current->value;
        free(current);
        *head=NULL;
        return popped_value;
    }
    Node* prev;
    while (current->next != NULL){
        prev = current;
        current = current->next;
    }
    int popped_value = current->value;
    free(current);
    prev->next = NULL;
    return popped_value;
}

void push_front(Node** head, int value){
    Node* new_node = create_node(value);
    if (*head == NULL){
        *head = new_node;
        return;
    } else {
        Node* current = *head;
        Node* next_node = current;
        *head = new_node;
        new_node->next = next_node;
        return;
    }
}

int length(Node* head){
    int counter = 0;
    while (head != NULL){
        counter++;
        head = head->next;
    }
    return counter;
}

void insert_at(Node** head, int index, int value){
    Node* current = *head;
    Node* prev;
    int current_ind = 0;
    if (index == 0) { push_front(head, value); return; }
    if (index == length(*head)){ append(head, value); return; }
    if (*head == NULL){
        if (index != 0){
            fprintf(stderr, "ERROR: index doesn't match the size of list\n");
            return;
        } else {
            append(head, value);
            return;
        }
    }
    while (current_ind != index){
        if (current->next == NULL){
            fprintf(stderr, "ERROR: index doesn't match the size of list\n");
            return;
        }
        current_ind++;
        prev = current;
        current = current->next;
    }
    Node* new_node = create_node(value);
    Node* next_node = current;
    current = new_node;
    prev->next = current;
    current->next = next_node;
}

int find(Node* head, int value){
    int current_index = 0;
    if (head == NULL){ return -1; }
    while (head != NULL){
        if (head->value == value){
            return current_index;
        } else {
            current_index++;
            head = head->next;
        }
    }
    return -1;
}

// void reverse(Node** head){
//     int len = length(*head);
//     if (len > 1){
//         Node* left = *head;
//         Node* right = left;
//         while (right->next != NULL) { right = right->next; }
//                to do...
//     }
// }