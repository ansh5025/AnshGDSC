#include<iostream>
using namespace std;

void update(int arr[], int n) {
    cout << endl << "Inside the function" << endl;

    // Updating array's first element
    arr[0] = 120;

    // Printing the array
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}

int main() {
    int arr[3] = {1, 2, 3};

    // Store the original array in a separate variable
    int originalArr[3];
    for (int i = 0; i < 3; i++) {
        originalArr[i] = arr[i];
    }

    update(arr, 3);

    // Printing the original array
    cout << endl << "Printing  main function" << endl;
    for (int i = 0; i < 3; i++) {
        cout << originalArr[i] << " ";
    }
    cout << endl;

    return 0;
}
