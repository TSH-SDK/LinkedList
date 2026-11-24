#include <iostream>
#include "list.h"

void selection_sort(LinkedList* list) {
    Node* cur = list->head;
    while (cur != nullptr) {
        Node* min = min_price(cur->next);
        if (min!= nullptr && min->data.price < cur->data.price) {
            Product t = cur->data;
            cur->data = min->data;
            min->data = t;
        }
        cur = cur->next;
    }
}
int main() {
    int n;
    std::cin >> n;
    LinkedList* list = new LinkedList();
    for (int i = 0; i < n; i++) {
        Node* new_node = new Node();
        std::cin >> (*new_node).data.name;
        std::cin >> (*new_node).data.price;
        insert(list, new_node);
    }
    echo_list(list);
    selection_sort(list);
    echo_list(list);
    Node* new_node = new Node();
    std::cin >> (*new_node).data.name;
    std::cin >> (*new_node).data.price;
    insert(list, new_node);
    selection_sort(list);
    echo_list(list);
    delete list;
    return 0;
}