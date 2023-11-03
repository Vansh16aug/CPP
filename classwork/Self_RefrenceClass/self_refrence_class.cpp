#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
        }
        else {  //If the list is not empty, it traverses the list using a loop until it finds the last node (where current->next is nullptr) and then appends the new node.
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
             cout << current->data << " -> ";
            current = current->next;
        }
         cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList myLinkedList;
    myLinkedList.append(1);
    myLinkedList.append(2);
    myLinkedList.append(3);

    myLinkedList.display();

    return 0;
}
