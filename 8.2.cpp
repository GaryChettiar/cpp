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

    // Function to insert an element at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to delete an element from a specified position
    void remove(int position) {
        if (position <= 0 || head == nullptr) {
            std::cout << "Invalid position or list is empty." << std::endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            int currentPosition = 1;

            while (currentPosition < position - 1 && current->next != nullptr) {
                current = current->next;
                currentPosition++;
            }

            if (current->next == nullptr) {
                std::cout << "Invalid position." << std::endl;
                return;
            }

            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
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

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);

    myList.display();

    myList.remove(2);
    myList.remove(1);
    myList.remove(3);

    myList.display();

    return 0;
}
