#include <iostream>
#include <string>
using namespace std;
int main() {
    string array[] = {"B123","C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for (const auto& element : array) {
        
        if (element[0] == 'B') {
            
        cout << element << endl;
        }
    }

    return 0;
}






