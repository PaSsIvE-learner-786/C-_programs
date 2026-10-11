#include <iostream>
using namespace std;

enum Signal {Red, Yellow, Green};

int main() {
    Signal s = Green;

    if(s == Green)
        cout << "Go";
    else
        cout << "Stop";

    return 0;
}