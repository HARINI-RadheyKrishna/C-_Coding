#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    // Function to append a new node to the end of the list
    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to delete a node from the list with O(1) complexity
    void erase(Node* nodeToDelete) {
        if (nodeToDelete == nullptr) return;

        if (nodeToDelete->prev != nullptr) {
            nodeToDelete->prev->next = nodeToDelete->next;
        } else {
            head = nodeToDelete->next;
        }

        if (nodeToDelete->next != nullptr) {
            nodeToDelete->next->prev = nodeToDelete->prev;
        } else {
            tail = nodeToDelete->prev;
        }

        delete nodeToDelete;
    }

    // Function to print the elements of the list
    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    std::cout << "Original list: ";
    list.print();

    // Erase node with data 3
    Node* nodeToDelete = list.head->next->next;
    list.erase(nodeToDelete);

    std::cout << "List after deleting node with data 3: ";
    list.print();

    return 0;
}
