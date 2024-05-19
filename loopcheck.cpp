#include <iostream>
using namespace std;

int main() {
    while (1) {
        cout << "Enter your age: ";
        int age;
        cin >> age;

        if (age < 18) {
            cout << "You are not eligible to vote!\n";
        } else {
            cout << "You are eligible to vote!\n";
            break; // Exit the loop when the age is eligible
        }
    }
    
    return 0;
}
