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
void echo_list(LinkedList* list){
    Node* current = list->head;
    while (current != nullptr) {
        int n;
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


#endif