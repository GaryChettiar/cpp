#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LIST {
private:
    Node* head;

public:
    LIST() {
        head = nullptr;
    }

    // Function to insert an element at a specified position
    void insert(int value, int position) {
        Node* newNode = new Node(value);

        if (position == 1 || head == nullptr) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            int currentPosition = 1;

            while (currentPosition < position - 1 && current->next != nullptr) {
                current = current->next;
                currentPosition++;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to display the list
    void display() {
        Node* current = head;

        if (current == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        std::cout << "List elements: ";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LIST myList;
    myList.display();

    myList.insert(10, 1);
    myList.insert(20, 2);
    myList.insert(30, 2);
    myList.insert(40, 4);

    myList.display();

    return 0;
}
