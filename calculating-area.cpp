#include <iostream>
#include <cmath>

using namespace std;
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}
double calculateRectangleArea(double length, double width) {
    return length * width;
}
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    char select;
    
    cout << "please select the area to calculate :\n";
    cout << "1. Triangle\n";
    cout << "2. Rectangle\n";
    cout << "3. Square\n";
    cout << "4. Quit\n";
    cout << "Enter selecton: ";
    cin >> select;

    switch(select) {
        case '1': {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle is: " << calculateTriangleArea(base, height) << endl;
            break;
        }
        case '2': {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
            break;
        }
        case '3': {
            double side;
            cout << "Enter the side of the square: ";
            cin >> side;
            cout << "Area of the square is: " << calculateSquareArea(side) << endl;
            break;
        }
        case '4':
            return 0; 
        default:
            cout << " valid input. Please enter a valid 1 to 4.\n";
    }

    return 0;
}
