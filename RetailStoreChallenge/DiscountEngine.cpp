#include <iostream>
#include<iomanip>
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
    
    cout <<"Discounted Amount:"<<fixed << setprecision(2) << DisAmt << " | " << "Final Price: " << fixed << setprecision(2) << FinalPrice << endl;
    return 0;
}