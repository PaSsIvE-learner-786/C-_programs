#include <iostream>
using namespace std;

union Data {
    int num;
    char ch;
};

int main() {
    Data d;
    d.num = 100;

    cout << d.num;

    return 0;
}