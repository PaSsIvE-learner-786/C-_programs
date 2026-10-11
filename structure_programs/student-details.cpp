#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s;

    cout << "Enter Name and Age: ";
    cin >> s.name >> s.age;

    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age;

    return 0;
}