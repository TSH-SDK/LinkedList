#include <iostream>
#include "list.h"

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