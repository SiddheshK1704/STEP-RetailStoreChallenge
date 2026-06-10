#include <iostream>
using namespace std;

int main(){
    string ProductName;
    float Price;
    float Quantity;

    cout << "Enter the product name:";
    cin >> ProductName;

    cout << "Enter the price of the product: ";
    cin >> Price;

    cout << "Enter the quantity:";
    cin>> Quantity;

    cout << "\n";
    
    cout << "Product Name: "<< ProductName <<endl;
    float TotalCost = Price * Quantity;
    cout << "Total Cost: "<< TotalCost << endl;

    return 0;
}