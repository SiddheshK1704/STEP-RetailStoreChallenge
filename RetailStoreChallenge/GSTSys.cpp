#include <iostream>
using namespace std;

int main(){
    string ProductName;
    float Price;

    cout<< "Enter the product name : ";
    cin >> ProductName;
    cout << "Enter the Price of the product: ";
    cin >> Price;

    const float GSTPerc = 18;
    float GSTAmt = Price * (GSTPerc/100);

    cout << "\n";
    float FinalPrice = Price + GSTAmt;

    cout << "Product Name: "<< ProductName <<endl;
    cout << "Price: "<< Price << endl;
    cout << "Final Payable Amount (inlcuding GST): "<< FinalPrice << endl;
    return 0;
}