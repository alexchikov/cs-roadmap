#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdbool.h>


typedef struct _node{
    int value;
    struct _node* next;
} Node;


Node* init_list();
Node* create_node(int value);
void append(Node** head, int value);
void print_list(Node* head);
int length(Node* head);
int pop(Node** head);
void insert_at(Node** head, int index, int value);
void free_list(Node** head);
void push_front(Node** head, int value);
int find(Node* head, int value);
#endif