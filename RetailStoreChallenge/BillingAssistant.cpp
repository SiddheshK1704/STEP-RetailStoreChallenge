#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    string ProductName;
    double Price;
    int Quantity;

    cout << "Enter the product name:";
    cin >> ProductName;

    cout << "Enter the price of the product: ";
    cin >> Price;

    cout << "Enter the quantity:";
    cin>> Quantity;

    cout << "\n";
    
    cout << "Product Name: "<< ProductName <<endl;
    double TotalCost = Price*Quantity;
    cout << "Total Cost: "<< fixed << setprecision(2) << TotalCost << endl;

    return 0;
}