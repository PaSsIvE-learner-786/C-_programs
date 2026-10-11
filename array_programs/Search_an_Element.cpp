#include <iostream>
using namespace std;

int main() {
    int arr[5], key;

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Element Found";
            return 0;
        }
    }

    cout << "Element Not Found";
    return 0;
}