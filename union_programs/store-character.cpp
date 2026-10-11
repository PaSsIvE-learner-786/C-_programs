#include <iostream>
using namespace std;

union Data {
    int num;
    char ch;
};

int main() {
    Data d;
    d.ch = 'A';

    cout << d.ch;

    return 0;
}