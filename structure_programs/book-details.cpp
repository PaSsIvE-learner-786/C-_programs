#include <iostream>
using namespace std;

struct Book {
    string title;
    int price;
};

int main() {
    Book b;

    cout << "Enter Title and Price: ";
    cin >> b.title >> b.price;

    cout << "Title: " << b.title << endl;
    cout << "Price: " << b.price;

    return 0;
}