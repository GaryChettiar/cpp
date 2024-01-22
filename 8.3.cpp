#include <iostream>

class STACK {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    STACK() {
        top = -1; // Initialize the top of the stack
    }

    // Function to push an element onto the stack
    void push(int element) {
        if (top >= MAX_SIZE - 1) {
            std::cout << "Stack overflow! Cannot push element." << std::endl;
        } else {
            arr[++top] = element;
            std::cout << "Pushed " << element << " onto the stack." << std::endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        } else {
            std::cout << "Popped " << arr[top--] << " from the stack." << std::endl;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Function to display the elements in the stack
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    STACK myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.display();

    myStack.pop();
    myStack.pop();

    myStack.display();

    myStack.push(40);
    myStack.push(50);

    myStack.display();

    return 0;
}
