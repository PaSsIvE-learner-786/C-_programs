#include <iostream>
using namespace std;

enum Grade {A, B, C};

int main() {
    Grade g = A;

    if(g == A)
        cout << "Excellent";
    else
        cout << "Good";

    return 0;
}