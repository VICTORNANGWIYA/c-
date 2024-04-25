#include <iostream>
#include <limits>

using namespace std;

int main() {
    int number;

    
    while (true) {
        cout << "Enter an integer between 5 and 10: ";

        
        while (!(cin >> number) || (number < 5 || number > 10)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter an integer between 5 and 10: ";
        }

        break; 
    }

    cout << "Your input " << number << " has been accepted." << endl;

    return 0;
}
