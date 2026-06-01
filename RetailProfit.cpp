#include <iostream>
using namespace std;

int main(){
    string ProductName;
    cout << " Enter the Product Name: ";
    cin >> ProductName;

    float CP;
    cout << " Enter the Cost Price of the Product: \n";
    cin >> CP;

    int UnitsSold;
    cout << " Enter the Units of the Product Sold: \n";
    cin >> UnitsSold;

    float SP;
    cout << " Enter the Selling Price of the Product: \n";
    cin >> SP;

    float Investment  =  CP * UnitsSold;
    float Revenue = SP * UnitsSold;

    float Profit = Revenue - Investment;

    float ProfitPerc = (Profit / Investment) *100;


    cout << "\n";
    cout << "Product Name: "<< ProductName <<endl;
    cout << "Investment: "<< Investment << endl;
    cout << "Revenue: "<< Revenue << endl;
    cout << "Profit: "<< Profit << endl;
    cout << "Profit Percentage: "<< ProfitPerc << "%" << endl;
    return 0;

}