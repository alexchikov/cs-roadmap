#include <stdio.h>
#include <stdlib.h>
#include "list.h"


Node* create_node(int value){
    Node* head = NULL;
    head = (Node *) malloc(sizeof(value));
    head->value = value;
    head->next = NULL;
    return head;
}

Node* init_list(int value){
    return create_node(value);
}


void append(Node* head, int value){
    while(head->next != NULL){
        head = head->next;
    }
    head->next = create_node(value);
}

void print_list(Node* head){
    while (head->next != NULL){
        printf("%d\t", head->value);
        head = head->next;
    };
    printf("\n");
}