#ifndef LIST_H
#define LIST_H

struct Product {
    char name[20] = "neponyanto";
    int price;
};

struct Node {
    Product data;
    Node* next = nullptr;
};

struct LinkedList {
    Node* head = nullptr;
};

int insert(LinkedList* list, Node* data);

void echo_list(LinkedList* list);

Node* min_price(Node* current);

void clear_list(LinkedList* list);

void selection_sort(LinkedList* list);

#endif