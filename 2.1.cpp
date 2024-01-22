#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    const float pi = 3.14159; // You can use a more accurate value of pi if needed
    float area;

public:
    void acceptRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        area = pi * radius * radius;
    }

    void displayDetails() {
        cout << "Circle Details:" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Circle circle;

    // Accept radius from the user
    circle.acceptRadius();

    // Calculate the area of the circle
    circle.calculateArea();

    // Display circle details
    circle.displayDetails();

    return 0;
}
