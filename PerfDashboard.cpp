#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int customers;
    float avgPurchaseValue;
    float discountPercent;
    float operatingCost;

    cout << "===== DAILY PERFORMANCE DASHBOARD =====\n\n";

    cout << "Enter Number of Customers: ";
    cin >> customers;

    cout << "Enter Average Purchase Value: ";
    cin >> avgPurchaseValue;

    cout << "Enter Discount Percentage: ";
    cin >> discountPercent;

    cout << "Enter Operating Cost: ";
    cin >> operatingCost;

    // Step 1: Gross Sales
    float grossSales = customers * avgPurchaseValue;

    // Step 2: Discount Amount
    float discountAmount = grossSales * (discountPercent / 100.0);

    // Step 3: Net Sales
    float netSales = grossSales - discountAmount;

    // Step 4: Operating Profit
    float operatingProfit = netSales - operatingCost;

    // Step 5: Profit Margin
    float profitMargin = (operatingProfit / netSales) * 100;

    cout << "\n========== DASHBOARD ==========\n";

    cout << fixed << setprecision(2);

    cout << "Gross Sales      : Rs. " << grossSales << endl;
    cout << "Discount Amount  : Rs. " << discountAmount << endl;
    cout << "Net Sales        : Rs. " << netSales << endl;
    cout << "Operating Profit : Rs. " << operatingProfit << endl;
    cout << "Profit Margin    : " << profitMargin << "%" << endl;

    cout << "===============================\n";

    return 0;
}