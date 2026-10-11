#include <iostream>
using namespace std;

union Number {
    int i;
    float f;
};

int main() {
    Number n;
    n.f = 10.5;

    cout << n.f;

    return 0;
}