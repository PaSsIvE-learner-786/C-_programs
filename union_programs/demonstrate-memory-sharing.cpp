#include <iostream>
using namespace std;

union Test {
    int num;
    char ch;
};

int main() {
    Test t;

    t.num = 65;
    cout << "Integer: " << t.num << endl;

    t.ch = 'B';
    cout << "Character: " << t.ch;

    return 0;
}