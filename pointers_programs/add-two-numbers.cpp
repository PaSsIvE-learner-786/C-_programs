#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    cout << "Sum = " << *p + *q;

    return 0;
}