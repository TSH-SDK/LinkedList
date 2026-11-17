#include <iostream>
#include "list.h"

int insert(LinkedList* list, Node* data) {
    if (list->head == nullptr) {
        list->head = data;
        return 0;
    }

    Node* current = list->head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = data;

    return 0;
}

void echo_list(LinkedList* list) {
    Node* current = list->head;

    while (current != nullptr) {
        std::cout << current->data.name << '\n';
        std::cout << current->data.price << '\n';
        std::cout << '\n';

        current = current->next;
    }
}

Node* min_price(Node* current) {
    Node* cur = current;
    int min_price = 10000000;
    Node* min_node = nullptr;

    while (cur != nullptr) {
        if (cur->data.price < min_price) {
            min_price = cur->data.price;
            min_node = cur;
        }

        cur = cur->next;
    }

    return min_node;
}

