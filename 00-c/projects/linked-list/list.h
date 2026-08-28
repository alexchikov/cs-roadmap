#include <stdio.h>
#include <stdbool.h>


typedef struct _node{
    int value;
    struct _node* next;
} Node;


Node* init_list(int value);
Node* create_node(int value);
void append(Node* head, int value);
void print_list(Node* head);