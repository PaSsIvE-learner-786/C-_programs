#include <iostream>
using namespace std;

struct Employee {
    int id;
    float salary;
};

int main() {
    Employee e;

    cout << "Enter ID and Salary: ";
    cin >> e.id >> e.salary;

    cout << "ID: " << e.id << endl;
    cout << "Salary: " << e.salary;

    return 0;
}