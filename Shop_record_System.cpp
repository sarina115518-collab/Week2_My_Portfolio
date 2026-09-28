// Shop Record System
// Sarina_115518

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string productName;
    int quantity;
    double price;

    cout << "Shop Record System" << endl;
    cout << "------------------" << endl;

    cout << "Enter product name: ";
    getline(cin, productName);

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    double total = quantity * price;

    cout << endl;
    cout << "Shop Record" << endl;
    cout << "-----------" << endl;
    cout << "Product: " << productName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price per item: $" << price << endl;
    cout << "Total price: $" << total << endl;

    return 0;
}