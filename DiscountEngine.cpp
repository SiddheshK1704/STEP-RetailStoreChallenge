#include <iostream>
using namespace std;
int main(){
    float ProductPrice;
    float DisPerc;

    cout<<" Enter the Price of the Product: ";
    cin>> ProductPrice;
    cout<<" Enter the Discount Percentage: ";
    cin>> DisPerc;

    float DisAmt = ProductPrice * (DisPerc/100);
    float FinalPrice = ProductPrice - DisAmt;

    cout << "\n";
    
    cout <<"Discounted Amount:"<<DisAmt << "|" << "Final Price: " << FinalPrice << endl;
    return 0;
}